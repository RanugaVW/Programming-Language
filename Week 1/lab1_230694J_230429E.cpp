#include <cctype>
#include <fstream>
#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

// Token Types
enum TokenType {
  IDENTIFIER,
  INTEGER,
  OPERATOR,
  STRING,
  KEYWORD,
  PUNCTUATION,
  END_OF_FILE,
  ERROR
};

// Map TokenType to String for output
string tokenTypeToString(TokenType type) {
  switch (type) {
  case IDENTIFIER:
    return "IDENTIFIER";
  case INTEGER:
    return "INTEGER";
  case OPERATOR:
    return "OPERATOR";
  case STRING:
    return "STRING";
  case KEYWORD:
    return "KEYWORD";
  case PUNCTUATION:
    return "PUNCTUATION";
  case END_OF_FILE:
    return "EOF";
  case ERROR:
    return "ERROR";
  default:
    return "UNKNOWN";
  }
}

// Token Structure
struct Token {
  TokenType type;
  string value;
};

// RPAL Keywords
const unordered_set<string> keywords = {
    "let", "where", "true", "false", "not", "fn",    "ls",
    "gr",  "ge",    "aug",  "le",    "nil", "dummy", "or",
    "in",  "eq",    "ne",   "and",   "rec", "within"};

// RPAL Operator Symbols
const string operator_symbols = "+-*<>&.@/:=~|$!#%^_[]{}\"'?";

bool isOperatorSymbol(char c) {
  return operator_symbols.find(c) != string::npos;
}

bool isPunctuation(char c) {
  return c == '(' || c == ')' || c == ';' || c == ',';
}

class Scanner {
private:
  string source;
  int current;
  int line;

public:
  Scanner(string src) : source(src), current(0), line(1) {}

  bool isAtEnd() { return current >= source.length(); }

  char advance() { return source[current++]; }

  char peek() {
    if (isAtEnd())
      return '\0';
    return source[current];
  }

  char peekNext() {
    if (current + 1 >= source.length())
      return '\0';
    return source[current + 1];
  }

  Token scanToken() {
    skipWhitespaceAndComments();

    if (isAtEnd())
      return {END_OF_FILE, ""};

    char c = peek();

    // 1. Identifiers and Keywords
    if (isalpha(c)) {
      return identifier();
    }

    // 2. Integers
    if (isdigit(c)) {
      return integer();
    }

    // 3. Strings
    if (c == '\'') {
      return stringToken();
    }

    // 4. Punctuation
    if (isPunctuation(c)) {
      advance();
      return {PUNCTUATION, string(1, c)};
    }

    // 5. Operators
    // Note: '_' can be an operator if it's not part of an identifier
    // But since identifier checks isalpha() first, start with '_' is checked
    // here? Wait, prompt says: Identifier -> Letter (Letter | Digit | '_')* So
    // Identifier MUST start with a letter. Operator -> Operator_symbol+
    // Operator_symbol includes '_'.
    // So if it starts with '_', it is an operator.
    // If it starts with '+', it is an operator.
    if (isOperatorSymbol(c)) {
      return operatorToken();
    }

    advance(); // Consume invalid char
    return {ERROR, string(1, c)};
  }

  void skipWhitespaceAndComments() {
    while (true) {
      char c = peek();
      if (c == ' ' || c == '\t' || c == '\r' || c == '\n') {
        if (c == '\n')
          line++;
        advance();
      } else if (c == '/' && peekNext() == '/') {
        // Comment //
        while (peek() != '\n' && !isAtEnd())
          advance();
      } else {
        return;
      }
    }
  }

  Token identifier() {
    string text = "";
    // Start with letter (already checked)
    while (isalnum(peek()) || peek() == '_') {
      text += advance();
    }

    if (keywords.count(text)) {
      return {KEYWORD, text};
    }
    return {IDENTIFIER, text};
  }

  Token integer() {
    string text = "";
    while (isdigit(peek())) {
      text += advance();
    }
    return {INTEGER, text};
  }

  Token operatorToken() {
    string text = "";
    while (isOperatorSymbol(peek())) {
      text += advance();
    }
    return {OPERATOR, text};
  }

  Token stringToken() {
    advance();        // Consume opening quote '
    string text = ""; // RPAL strings usually include the quotes in raw value,
                      // but output example implies escaped content?
    // Prompt Output Example: <STRING, "whatever">
    // Prompt String definition: '''' ... ''''
    // Let's store the content. The example output shows strings with double
    // quotes in the value part?? Wait, the example output <IDENTIFIER, "x">
    // uses double quotes for value. But the input has 'string'. Let's just
    // capture the content.

    while (peek() != '\'' && !isAtEnd()) {
      char c = peek();
      if (c == '\\') {
        advance(); // skip backslash
        char nxt = peek();
        if (nxt == 't') {
          text += "\\t";
          advance();
        } else if (nxt == 'n') {
          text += "\\n";
          advance();
        } else if (nxt == '\\') {
          text += "\\\\";
          advance();
        } else if (nxt == '\'') {
          text += "\\'";
          advance();
        } else {
          // Unknown escape, just keep literal
          text += '\\';
          // Don't advance 'nxt' here, let loop handle it?
          // Actually typical scanner behaviour: keep backslash if not special
        }
      } else {
        text += advance();
      }
    }

    if (isAtEnd()) {
      return {ERROR, "Unterminated String"};
    }

    advance(); // Consume closing quote '

    // Output format requires the value to be quoted?
    // Example: <IDENTIFIER, "x">
    // So for a string 'abc', output should be <STRING, "abc">? Or <STRING,
    // "'abc'">? Usually scanners strip the quotes. The example output format
    // wraps the VALUE in double quotes. <TYPE, "VALUE">.
    return {STRING, text}; // We return raw text, formatting will add ""
  }
};

int main(int argc, char *argv[]) {
  if (argc < 2) {
    cerr << "Usage: " << argv[0] << " <filename>" << endl;
    return 1;
  }

  ifstream file(argv[1]);
  if (!file.is_open()) {
    cerr << "Error opening file: " << argv[1] << endl;
    return 1;
  }

  string content((istreambuf_iterator<char>(file)),
                 istreambuf_iterator<char>());
  file.close();

  Scanner scanner(content);

  while (true) {
    Token token = scanner.scanToken();
    if (token.type == END_OF_FILE)
      break;

    if (token.type == ERROR) {
      // Need to decide how to handle errors. Prompt says "Report lexical
      // errors". We can print an error message.
      if (token.value == "Unterminated String") {
        cout << "<ERROR, \"Unterminated String\">" << endl;
      } else {
        cout << "<ERROR, \"Invalid Symbol: " << token.value << "\">" << endl;
      }
      // Continue or exit? Usually defined by lab specs. I'll continue.
    } else {
      // Formatting output as <TYPE, "VALUE">
      cout << "<" << tokenTypeToString(token.type) << ", \"" << token.value
           << "\">" << endl;
    }
  }

  return 0;
}
