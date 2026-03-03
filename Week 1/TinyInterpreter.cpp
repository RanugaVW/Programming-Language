#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <map>
#include <cctype>
#include <cstdlib>
#include <memory>

using namespace std;

// --- Tokenizer ---

enum TokenType {
    TOKEN_PROGRAM, TOKEN_VAR, TOKEN_INTEGER, TOKEN_BEGIN, TOKEN_END,
    TOKEN_IF, TOKEN_THEN, TOKEN_ELSE, TOKEN_WHILE, TOKEN_DO, TOKEN_REPEAT, TOKEN_UNTIL,
    TOKEN_READ, TOKEN_OUTPUT,
    TOKEN_ID, TOKEN_NUM,
    TOKEN_ASSIGN, TOKEN_PLUS, TOKEN_MINUS, TOKEN_MULT, TOKEN_DIV,
    TOKEN_EQ, TOKEN_NEQ, TOKEN_LT, TOKEN_GT, TOKEN_LTE, TOKEN_GTE,
    TOKEN_LPAREN, TOKEN_RPAREN, TOKEN_SEMI, TOKEN_COMMA, TOKEN_COLON, TOKEN_DOT,
    TOKEN_EOF
};

struct Token {
    TokenType type;
    string text;
    int line;
};

class Scanner {
    string source;
    int pos = 0;
    int line = 1;

public:
    Scanner(string src) : source(src) {}

    Token nextToken() {
        skipWhitespace();
        if (pos >= source.length()) return {TOKEN_EOF, "", line};

        char c = source[pos];

        if (isalpha(c)) {
            string text;
            while (pos < source.length() && (isalnum(source[pos]) || source[pos] == '_')) {
                text += source[pos++];
            }
            if (text == "program") return {TOKEN_PROGRAM, text, line};
            if (text == "var") return {TOKEN_VAR, text, line};
            if (text == "integer") return {TOKEN_INTEGER, text, line};
            if (text == "begin") return {TOKEN_BEGIN, text, line};
            if (text == "end") return {TOKEN_END, text, line};
            if (text == "if") return {TOKEN_IF, text, line};
            if (text == "then") return {TOKEN_THEN, text, line};
            if (text == "else") return {TOKEN_ELSE, text, line};
            if (text == "while") return {TOKEN_WHILE, text, line};
            if (text == "do") return {TOKEN_DO, text, line};
            if (text == "repeat") return {TOKEN_REPEAT, text, line};
            if (text == "until") return {TOKEN_UNTIL, text, line};
            if (text == "read") return {TOKEN_READ, text, line};
            if (text == "output") return {TOKEN_OUTPUT, text, line};
            return {TOKEN_ID, text, line};
        }

        if (isdigit(c)) {
            string text;
            while (pos < source.length() && isdigit(source[pos])) {
                text += source[pos++];
            }
            return {TOKEN_NUM, text, line};
        }

        pos++;
        switch (c) {
            case '+': return {TOKEN_PLUS, "+", line};
            case '-': return {TOKEN_MINUS, "-", line};
            case '*': return {TOKEN_MULT, "*", line};
            case '/': return {TOKEN_DIV, "/", line};
            case '(': return {TOKEN_LPAREN, "(", line};
            case ')': return {TOKEN_RPAREN, ")", line};
            case ';': return {TOKEN_SEMI, ";", line};
            case ',': return {TOKEN_COMMA, ",", line};
            case '.': return {TOKEN_DOT, ".", line};
            case '=': return {TOKEN_EQ, "=", line};
            case '<':
                if (match('=')) return {TOKEN_LTE, "<=", line};
                if (match('>')) return {TOKEN_NEQ, "<>", line};
                return {TOKEN_LT, "<", line};
            case '>':
                if (match('=')) return {TOKEN_GTE, ">=", line};
                return {TOKEN_GT, ">", line};
            case ':':
                if (match('=')) return {TOKEN_ASSIGN, ":=", line};
                return {TOKEN_COLON, ":", line};
        }

        cerr << "Unexpected character: " << c << " at line " << line << endl;
        exit(1);
    }

private:
    bool match(char expected) {
        if (pos < source.length() && source[pos] == expected) {
            pos++;
            return true;
        }
        return false;
    }

    void skipWhitespace() {
        while (pos < source.length()) {
            char c = source[pos];
            if (c == ' ' || c == '\t' || c == '\r') {
                pos++;
            } else if (c == '\n') {
                line++;
                pos++;
            } else if (c == '{') { // Comments in Tiny are usually { ... }
                 pos++;
                 while (pos < source.length() && source[pos] != '}') {
                     if (source[pos] == '\n') line++;
                     pos++;
                 }
                 if (pos < source.length()) pos++; // skip }
            } else {
                break;
            }
        }
    }
};

// --- AST ---

struct Node {
    virtual ~Node() = default;
};

struct ExprNode : Node {
    virtual int evaluate(map<string, int>& env) = 0;
};

struct StmtNode : Node {
    virtual void execute(map<string, int>& env) = 0;
};

struct NumNode : ExprNode {
    int value;
    NumNode(int v) : value(v) {}
    int evaluate(map<string, int>& env) override { return value; }
};

struct VarNode : ExprNode {
    string name;
    VarNode(string n) : name(n) {}
    int evaluate(map<string, int>& env) override { return env[name]; }
};

struct BinOpNode : ExprNode {
    unique_ptr<ExprNode> left, right;
    TokenType op;
    BinOpNode(unique_ptr<ExprNode> l, TokenType o, unique_ptr<ExprNode> r)
        : left(move(l)), op(o), right(move(r)) {}
    int evaluate(map<string, int>& env) override {
        int l = left->evaluate(env);
        int r = right->evaluate(env);
        switch (op) {
            case TOKEN_PLUS: return l + r;
            case TOKEN_MINUS: return l - r;
            case TOKEN_MULT: return l * r;
            case TOKEN_DIV: return l / r;
            case TOKEN_LT: return l < r;
            case TOKEN_GT: return l > r;
            case TOKEN_LTE: return l <= r;
            case TOKEN_GTE: return l >= r;
            case TOKEN_EQ: return l == r;
            case TOKEN_NEQ: return l != r;
            default: return 0;
        }
    }
};

struct AssignStmt : StmtNode {
    string name;
    unique_ptr<ExprNode> expr;
    AssignStmt(string n, unique_ptr<ExprNode> e) : name(n), expr(move(e)) {}
    void execute(map<string, int>& env) override {
        env[name] = expr->evaluate(env);
    }
};

struct ReadStmt : StmtNode {
    string name;
    ReadStmt(string n) : name(n) {}
    void execute(map<string, int>& env) override {
        int val;
        // cout << "Enter value for " << name << ": "; // simplified output
        if (!(cin >> val)) {
             cerr << "Error reading input" << endl;
             exit(1);
        }
        env[name] = val;
    }
};

struct OutputStmt : StmtNode {
    unique_ptr<ExprNode> expr;
    OutputStmt(unique_ptr<ExprNode> e) : expr(move(e)) {}
    void execute(map<string, int>& env) override {
        cout << expr->evaluate(env) << endl;
    }
};

struct BlockStmt : StmtNode {
    vector<unique_ptr<StmtNode>> stmts;
    void execute(map<string, int>& env) override {
        for (auto& s : stmts) s->execute(env);
    }
};

struct IfStmt : StmtNode {
    unique_ptr<ExprNode> condition;
    unique_ptr<StmtNode> thenBranch;
    unique_ptr<StmtNode> elseBranch;
    IfStmt(unique_ptr<ExprNode> c, unique_ptr<StmtNode> t, unique_ptr<StmtNode> e)
        : condition(move(c)), thenBranch(move(t)), elseBranch(move(e)) {}
    void execute(map<string, int>& env) override {
        if (condition->evaluate(env)) {
            thenBranch->execute(env);
        } else if (elseBranch) {
            elseBranch->execute(env);
        }
    }
};

struct RepeatStmt : StmtNode {
    unique_ptr<StmtNode> body;
    unique_ptr<ExprNode> condition;
    RepeatStmt(unique_ptr<StmtNode> b, unique_ptr<ExprNode> c)
        : body(move(b)), condition(move(c)) {}
    void execute(map<string, int>& env) override {
        do {
            body->execute(env);
        } while (!condition->evaluate(env));
    }
};

struct WhileStmt : StmtNode {
    unique_ptr<ExprNode> condition;
    unique_ptr<StmtNode> body;
    WhileStmt(unique_ptr<ExprNode> c, unique_ptr<StmtNode> b)
        : condition(move(c)), body(move(b)) {}
    void execute(map<string, int>& env) override {
        while (condition->evaluate(env)) {
            body->execute(env);
        }
    }
};

// --- Parser ---

class Parser {
    Scanner& scanner;
    Token currentToken;

public:
    Parser(Scanner& s) : scanner(s) {
        advance();
    }

    void advance() {
        currentToken = scanner.nextToken();
        // cout << "Token: " << currentToken.text << " Type: " << currentToken.type << endl;
    }

    void eat(TokenType type) {
        if (currentToken.type == type) {
            advance();
        } else {
            cerr << "Syntax error: Expected " << type << " but got " << currentToken.type << " at line " << currentToken.line << endl;
            exit(1);
        }
    }

    unique_ptr<StmtNode> parseProgram() {
        eat(TOKEN_PROGRAM);
        eat(TOKEN_ID);
        eat(TOKEN_COLON);
        
        // Declarations
        eat(TOKEN_VAR);
        do {
            eat(TOKEN_ID);
            if (currentToken.type == TOKEN_COMMA) advance();
            else break;
        } while (true);
        eat(TOKEN_COLON);
        eat(TOKEN_INTEGER);
        eat(TOKEN_SEMI);

        eat(TOKEN_BEGIN);
        auto block = parseStmtList();
        eat(TOKEN_END);
        eat(TOKEN_ID);
        eat(TOKEN_DOT);
        eat(TOKEN_EOF);

        return block;
    }

    unique_ptr<StmtNode> parseStmtList() {
        auto block = make_unique<BlockStmt>();
        block->stmts.push_back(parseStmt());
        while (currentToken.type == TOKEN_SEMI) {
            eat(TOKEN_SEMI);
            block->stmts.push_back(parseStmt());
        }
        return block;
    }

    unique_ptr<StmtNode> parseStmt() {
        if (currentToken.type == TOKEN_ID) {
            string name = currentToken.text;
            eat(TOKEN_ID);
            eat(TOKEN_ASSIGN);
            if (currentToken.type == TOKEN_READ) {
                eat(TOKEN_READ);
                return make_unique<ReadStmt>(name);
            } else {
                auto expr = parseExpr();
                return make_unique<AssignStmt>(name, move(expr));
            }
        } else if (currentToken.type == TOKEN_OUTPUT) {
            eat(TOKEN_OUTPUT);
            eat(TOKEN_LPAREN);
            auto expr = parseExpr();
            eat(TOKEN_RPAREN);
            return make_unique<OutputStmt>(move(expr));
        } else if (currentToken.type == TOKEN_IF) {
            eat(TOKEN_IF);
            auto cond = parseExpr();
            eat(TOKEN_THEN);
            auto thenStmt = parseStmt();
            unique_ptr<StmtNode> elseStmt = nullptr;
            if (currentToken.type == TOKEN_ELSE) {
                eat(TOKEN_ELSE);
                elseStmt = parseStmt();
            }
            // eat(TOKEN_END); // parse.tiny IF does NOT have END!
            return make_unique<IfStmt>(move(cond), move(thenStmt), move(elseStmt));
        } else if (currentToken.type == TOKEN_REPEAT) {
            eat(TOKEN_REPEAT);
            auto body = parseStmtList();
            eat(TOKEN_UNTIL);
            auto cond = parseExpr();
            return make_unique<RepeatStmt>(move(body), move(cond));
        } else if (currentToken.type == TOKEN_WHILE) {
            eat(TOKEN_WHILE);
            auto cond = parseExpr();
            eat(TOKEN_DO);
            auto body = parseStmt();
            return make_unique<WhileStmt>(move(cond), move(body));
        } else if (currentToken.type == TOKEN_BEGIN) {
             eat(TOKEN_BEGIN);
             auto block = parseStmtList();
             eat(TOKEN_END); // But parse.tiny calls it 'BEGINX' and 'END'? No, "Body -> BEGINX Statement list ';' END" 
             // Wait, parse.tiny says: "Body -> BEGINX Statement list ';' END"
             // And "Statement -> Body"
             // My scanner maps "begin" to TOKEN_BEGIN. 
             // If parse.tiny uses BEGINX alias for "begin", then checking TOKEN_BEGIN is correct.
             return block;
        }
        
        cerr << "Unexpected token in statement: " << currentToken.text << " line " << currentToken.line << endl;
        exit(1);
    }

    unique_ptr<ExprNode> parseExpr() {
        auto left = parseSimpleExpr();
        if (currentToken.type == TOKEN_LT || currentToken.type == TOKEN_GT || 
            currentToken.type == TOKEN_EQ || currentToken.type == TOKEN_NEQ ||
            currentToken.type == TOKEN_LTE || currentToken.type == TOKEN_GTE) {
            TokenType op = currentToken.type;
            advance();
            auto right = parseSimpleExpr();
            return make_unique<BinOpNode>(move(left), op, move(right));
        }
        return left;
    }

    unique_ptr<ExprNode> parseSimpleExpr() {
        auto left = parseTerm();
        while (currentToken.type == TOKEN_PLUS || currentToken.type == TOKEN_MINUS) {
            TokenType op = currentToken.type;
            advance();
            auto right = parseTerm();
            left = make_unique<BinOpNode>(move(left), op, move(right));
        }
        return left;
    }

    unique_ptr<ExprNode> parseTerm() {
        auto left = parseFactor();
        while (currentToken.type == TOKEN_MULT || currentToken.type == TOKEN_DIV) {
            TokenType op = currentToken.type;
            advance();
            auto right = parseFactor();
            left = make_unique<BinOpNode>(move(left), op, move(right));
        }
        return left;
    }

    unique_ptr<ExprNode> parseFactor() {
        if (currentToken.type == TOKEN_NUM) {
            int val = stoi(currentToken.text);
            eat(TOKEN_NUM);
            return make_unique<NumNode>(val);
        } else if (currentToken.type == TOKEN_ID) {
            string name = currentToken.text;
            eat(TOKEN_ID);
            return make_unique<VarNode>(name);
        } else if (currentToken.type == TOKEN_LPAREN) {
            eat(TOKEN_LPAREN);
            auto expr = parseExpr();
            eat(TOKEN_RPAREN);
            return expr;
        }
        cerr << "Unexpected token in factor: " << currentToken.text << endl;
        exit(1);
    }
};

int main(int argc, char* argv[]) {
    if (argc < 2) {
        cerr << "Usage: " << argv[0] << " <filename>" << endl;
        return 1;
    }

    ifstream file(argv[1]);
    if (!file.is_open()) {
        cerr << "Error opening file" << endl;
        return 1;
    }

    string content((istreambuf_iterator<char>(file)), istreambuf_iterator<char>());
    Scanner scanner(content);
    Parser parser(scanner);
    
    auto program = parser.parseProgram();
    
    map<string, int> env;
    program->execute(env);

    return 0;
}
