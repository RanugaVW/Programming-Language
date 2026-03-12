#include <stdio.h>
#include <header/Open_File.h>
#include <header/CommandLine.h>
#include <header/Table.h>
#include <header/Text.h>
#include <header/Error.h>
#include <header/String_Input.h> 
#include <header/Tree.h>
#include <header/Code.h>
#include <header/CodeGenerator.h>
#define LeftMode 0
#define RightMode 1

/*  ABSTRACT MACHINE OPERATIONS  */
#define NOP 1      /* 'NOP'       */
#define HALTOP 2   /* 'HALT'      */
#define LITOP 3    /* 'LIT'       */
#define LLVOP 4    /* 'LLV'       */
#define LGVOP 5    /* 'LGV'       */
#define SLVOP 6    /* 'SLV'       */
#define SGVOP 7    /* 'SGV'       */
#define LLAOP 8    /* 'LLA'       */
#define LGAOP 9    /* 'LGA'       */
#define UOPOP 10   /* 'UOP'       */
#define BOPOP 11   /* 'BOP'       */
#define POPOP 12   /* 'POP'       */
#define DUPOP 13   /* 'DUP'       */
#define SWAPOP 14  /* 'SWAP'      */
#define CALLOP 15  /* 'CALL'      */
#define RTNOP 16   /* 'RTN'       */
#define GOTOOP 17  /* 'GOTO'      */
#define CONDOP 18  /* 'COND'      */
#define CODEOP 19  /* 'CODE'      */
#define SOSOP 20   /* 'SOS'       */
#define LIMITOP 21 /* 'LIMIT'     */

/* ABSTRACT MACHINE OPERANDS */

/* UNARY OPERANDS */
#define UNOT 22      /* 'UNOT'     */
#define UNEG 23      /* 'UNEG'     */
#define USUCC 24     /* 'USUCC'    */
#define UPRED 25     /* 'UPRED'    */
                     /* BINARY OPERANDS */
#define BAND 26      /* 'BAND'     */
#define BOR 27       /* 'BOR'      */
#define BPLUS 28     /* 'BPLUS'    */
#define BMINUS 29    /* 'BMINUS'   */
#define BMULT 30     /* 'BMULT'    */
#define BDIV 31      /* 'BDIV'     */
#define BEXP 32      /* 'BEXP'     */
#define BMOD 33      /* 'BMOD'     */
#define BEQ 34       /* 'BEQ'      */
#define BNE 35       /* 'BNE'      */
#define BLE 36       /* 'BLE'      */
#define BGE 37       /* 'BGE'      */
#define BLT 38       /* 'BLT'      */
#define BGT 39       /* 'BGT'      */
                     /* OS SERVICE CALL OPERANDS */
#define TRACEX 40    /* 'TRACEX'   */
#define DUMPMEM 41   /* 'DUMPMEM'  */
#define OSINPUT 42   /* 'INPUT'    */
#define OSINPUTC 43  /* 'INPUT'    */
#define OSOUTPUT 44  /* 'OUTPUT'   */
#define OSOUTPUTC 45 /* 'OUTPUT'   */
#define OSOUTPUTL 46 /* 'OUTPUTL'  */
#define OSEOF 47     /* 'EOF'      */

/* TREE NODE NAMES */
#define ProgramNode 48    /* 'program'  */
#define TypesNode 49      /* 'types'    */
#define TypeNode 50       /* 'type'     */
#define DclnsNode 51      /* 'dclns'    */
#define DclnNode 52       /* 'dcln'     */
#define IntegerTNode 53   /* 'integer'  */
#define BooleanTNode 54   /* 'boolean'  */
#define BlockNode 55      /* 'block'    */
#define AssignNode 56     /* 'assign'   */
#define OutputNode 57     /* 'output'   */
#define IfNode 58         /* 'if'       */
#define WhileNode 59      /* 'while'    */
#define NullNode 60       /* '<null>'   */
#define LENode 61         /* '<='       */
#define PlusNode 62       /* '+'        */
#define MinusNode 63      /* '-'        */
#define ReadNode 64       /* 'read'     */
#define IntegerNode 65    /* '<integer>'*/
#define IdentifierNode 66 /* '<identifier>'*/
#define AndNode 67
#define OrNode 68
#define NotNode 69
#define StarNode 70
#define SlashNode 71
#define ExpNode 72
#define ModNode 73
#define EQNode 74
#define NEQNode 75
#define GTENode 76
#define LTNode 77
#define GTNode 78
#define TrueNode 79
#define FalseNode 80
#define EofNode 81
#define ForNode 82
#define ForDownNode 83
#define RepeatNode 84
#define LoopNode 85
#define ExitNode 86
#define CaseNode 87
#define SwapNode 88
#define CaseClauseNode 89
#define DotDotNode 90
#define OtherwiseNode 91

#define NumberOfNodes 91
typedef int Mode;

FILE *CodeFile;
char *CodeFileName;
Clabel HaltLabel;
Clabel CurrentExitLabel = NoLabel;

char *mach_op[] = {"NOP",    "HALT",   "LIT",     "LLV",     "LGV",     "SLV",
                   "SGV",    "LLA",    "LGA",     "UOP",     "BOP",     "POP",
                   "DUP",    "SWAP",   "CALL",    "RTN",     "GOTO",    "COND",
                   "CODE",   "SOS",    "LIMIT",   "UNOT",    "UNEG",    "USUCC",
                   "UPRED",  "BAND",   "BOR",     "BPLUS",   "BMINUS",  "BMULT",
                   "BDIV",   "BEXP",   "BMOD",    "BEQ",     "BNE",     "BLE",
                   "BGE",    "BLT",    "BGT",     "TRACEX",  "DUMPMEM", "INPUT",
                   "INPUTC", "OUTPUT", "OUTPUTC", "OUTPUTL", "EOF"};

/******************************************************************
   add new node names to the end of the array, keeping in strict order
   as defined above, then adjust the j loop control variable in
   InitializeNodeNames().
*******************************************************************/
char *node_name[] = {"program",
                     "types",
                     "type",
                     "dclns",
                     "dcln",
                     "integer",
                     "boolean",
                     "block",
                     "assign",
                     "output",
                     "if",
                     "while",
                     "<null>",
                     "<=",
                     "+",
                     "-",
                     "read",
                     "<integer>",
                     "<identifier>",
                     "and",
                     "or",
                     "not",
                     "*",
                     "/",
                     "**",
                     "mod",
                     "=",
                     "<>",
                     ">=",
                     "<",
                     ">",
                     "true",
                     "false",
                     "eof",
                     "for",
                     "fordown",
                     "repeat",
                     "loop",
                     "exit",
                     "case",
                     "swap",
                     "case_clause",
                     "..",
                     "otherwise"};

void CodeGenerate(int argc, char *argv[]) {
  int NumberTrees;

  InitializeCodeGenerator(argc, argv);
  Tree_File = Open_File("_TREE", "r");
  NumberTrees = Read_Trees();
  fclose(Tree_File);

  HaltLabel = ProcessNode(RootOfTree(1), NoLabel);
  CodeGen0(HALTOP, HaltLabel);

#if 0
   PrintAllStrings(stdout);
   PrintTree(stdout,RootOfTree(1));
#endif

  CodeFile = Open_File(CodeFileName, "w");
  DumpCode(CodeFile);
  fclose(CodeFile);

  if (TraceSpecified)
    fclose(TraceFile);

  /******************************************************************
    enable this code to write out the tree after the code generator
    has run.  It will show the new decorations made with MakeAddress().
  *******************************************************************/

  Tree_File = fopen("_TREE", "w");
  Write_Trees();
  fclose(Tree_File);
}

void InitializeCodeGenerator(int argc, char *argv[]) {
  InitializeMachineOperations();
  InitializeNodeNames();
  FrameSize = 0;
  CurrentProcLevel = 0;
  LabelCount = 0;
  CodeFileName = System_Argument("-code", "_CODE", argc, argv);
}

void InitializeMachineOperations(void) {
  int i, j;

  for (i = 0, j = 1; i < 47; i++, j++)
    String_Array_To_String_Constant(mach_op[i], j);
}

void InitializeNodeNames(void) {
  int i, j;

  for (i = 0, j = 48; j <= NumberOfNodes; i++, j++)
    String_Array_To_String_Constant(node_name[i], j);
}

String MakeStringOf(int Number) {
  Stack Temp;

  Temp = AllocateStack(50);
  ResetBufferInTextTable();
  if (Number == 0)
    AdvanceOnCharacter('0');
  else {
    while (Number > 0) {
      Push(Temp, (Number % 10) + 48);
      Number /= 10;
    }

    while (!(IsEmpty(Temp)))
      AdvanceOnCharacter((char)(Pop(Temp)));
  }
  return (ConvertStringInBuffer());
}

void Reference(TreeNode T, Mode M, Clabel L) {
  int Addr, OFFSET;
  String Op;

  Addr = Decoration(Decoration(T));
  OFFSET = FrameDisplacement(Addr);
  switch (M) {
  case LeftMode:
    DecrementFrameSize();
    if (ProcLevel(Addr) == 0)
      Op = SGVOP;
    else
      Op = SLVOP;
    break;
  case RightMode:
    IncrementFrameSize();
    if (ProcLevel(Addr) == 0)
      Op = LGVOP;
    else
      Op = LLVOP;
    break;
  }
  CodeGen1(Op, MakeStringOf(OFFSET), L);
}

int NKids(TreeNode T) { return (Rank(T)); }

void Expression(TreeNode T, Clabel CurrLabel) {
  int Kid;
  Clabel Label1;

  if (TraceSpecified) {
    fprintf(TraceFile, "<<< CODE GENERATOR >>> Processing Node ");
    Write_String(TraceFile, NodeName(T));
    fprintf(TraceFile, " , Label is  ");
    Write_String(TraceFile, CurrLabel);
    fprintf(TraceFile, "\n");
  }

  switch (NodeName(T)) {
  case PlusNode:
    Expression(Child(T, 1), CurrLabel);
    if (Rank(T) == 2) {
      Expression(Child(T, 2), NoLabel);
      CodeGen1(BOPOP, BPLUS, NoLabel);
      DecrementFrameSize();
    }
    break;

  case StarNode:
  case SlashNode:
  case ExpNode:
  case ModNode:
  case AndNode:
  case OrNode:
  case EQNode:
  case NEQNode:
  case GTENode:
  case LTNode:
  case GTNode:
  case LENode:
    Expression(Child(T, 1), CurrLabel);
    Expression(Child(T, 2), NoLabel);
    if (NodeName(T) == StarNode)
      CodeGen1(BOPOP, BMULT, NoLabel);
    else if (NodeName(T) == SlashNode)
      CodeGen1(BOPOP, BDIV, NoLabel);
    else if (NodeName(T) == ExpNode)
      CodeGen1(BOPOP, BEXP, NoLabel);
    else if (NodeName(T) == ModNode)
      CodeGen1(BOPOP, BMOD, NoLabel);
    else if (NodeName(T) == AndNode)
      CodeGen1(BOPOP, BAND, NoLabel);
    else if (NodeName(T) == OrNode)
      CodeGen1(BOPOP, BOR, NoLabel);
    else if (NodeName(T) == EQNode)
      CodeGen1(BOPOP, BEQ, NoLabel);
    else if (NodeName(T) == NEQNode)
      CodeGen1(BOPOP, BNE, NoLabel);
    else if (NodeName(T) == GTENode)
      CodeGen1(BOPOP, BGE, NoLabel);
    else if (NodeName(T) == LTNode)
      CodeGen1(BOPOP, BLT, NoLabel);
    else if (NodeName(T) == GTNode)
      CodeGen1(BOPOP, BGT, NoLabel);
    else if (NodeName(T) == LENode)
      CodeGen1(BOPOP, BLE, NoLabel);
    DecrementFrameSize();
    break;

  case NotNode:
    Expression(Child(T, 1), CurrLabel);
    CodeGen1(UOPOP, UNOT, NoLabel);
    break;

  case TrueNode:
    CodeGen1(LITOP, MakeStringOf(1), CurrLabel);
    IncrementFrameSize();
    break;

  case FalseNode:
    CodeGen1(LITOP, MakeStringOf(0), CurrLabel);
    IncrementFrameSize();
    break;

  case EofNode:
    CodeGen1(SOSOP, OSEOF, CurrLabel);
    IncrementFrameSize();
    break;

  case MinusNode:
    Expression(Child(T, 1), CurrLabel);
    if (Rank(T) == 2) {
      Expression(Child(T, 2), NoLabel);
      CodeGen1(BOPOP, BMINUS, NoLabel);
      DecrementFrameSize();
    } else
      CodeGen1(UOPOP, UNEG, NoLabel);
    break;

  case ReadNode:
    CodeGen1(SOSOP, OSINPUT, CurrLabel);
    IncrementFrameSize();
    break;

  case IntegerNode:
    CodeGen1(LITOP, NodeName(Child(T, 1)), CurrLabel);
    IncrementFrameSize();
    break;

  case IdentifierNode:
    Reference(T, RightMode, CurrLabel);
    break;

  default:
    ReportTreeErrorAt(T);
    printf("<<< CODE GENERATOR >>> : UNKNOWN NODE NAME ");
    Write_String(stdout, NodeName(T));
    printf("\n");

  } /* end switch */
} /* end Expression */

Clabel ProcessNode(TreeNode T, Clabel CurrLabel) {
  int Kid, Num, k;
  Clabel Label1, Label2, Label3, Label4, Label5;

  if (TraceSpecified) {
    fprintf(TraceFile, "<<< CODE GENERATOR >>> Processing Node ");
    Write_String(TraceFile, NodeName(T));
    fprintf(TraceFile, " , Label is  ");
    Write_String(TraceFile, CurrLabel);
    fprintf(TraceFile, "\n");
  }

  switch (NodeName(T)) {
  case ProgramNode:
    CurrLabel = ProcessNode(Child(T, NKids(T) - 2), CurrLabel);
    CurrLabel = ProcessNode(Child(T, NKids(T) - 1), NoLabel);
    return (CurrLabel);

  case TypesNode:
    for (Kid = 1; Kid <= NKids(T); Kid++)
      CurrLabel = ProcessNode(Child(T, Kid), CurrLabel);
    return (CurrLabel);

  case TypeNode:
    return (CurrLabel);

  case DclnsNode:
    for (Kid = 1; Kid <= NKids(T); Kid++)
      CurrLabel = ProcessNode(Child(T, Kid), CurrLabel);
    if (NKids(T) > 0)
      return (NoLabel);
    else
      return (CurrLabel);

  case DclnNode:
    for (Kid = 1; Kid < NKids(T); Kid++) {
      if (Kid != 1)
        CodeGen1(LITOP, MakeStringOf(0), NoLabel);
      else
        CodeGen1(LITOP, MakeStringOf(0), CurrLabel);
      Num = MakeAddress();
      Decorate(Child(T, Kid), Num);
      IncrementFrameSize();
    }
    return (NoLabel);

  case BlockNode:
    for (Kid = 1; Kid <= NKids(T); Kid++)
      CurrLabel = ProcessNode(Child(T, Kid), CurrLabel);
    return (CurrLabel);

  case AssignNode:
    Expression(Child(T, 2), CurrLabel);
    Reference(Child(T, 1), LeftMode, NoLabel);
    return (NoLabel);

  case OutputNode:
    Expression(Child(T, 1), CurrLabel);
    CodeGen1(SOSOP, OSOUTPUT, NoLabel);
    DecrementFrameSize();
    for (Kid = 2; Kid <= NKids(T); Kid++) {
      Expression(Child(T, Kid), NoLabel);
      CodeGen1(SOSOP, OSOUTPUT, NoLabel);
      DecrementFrameSize();
    }
    CodeGen1(SOSOP, OSOUTPUTL, NoLabel);
    return (NoLabel);

  case IfNode:
    Expression(Child(T, 1), CurrLabel);
    Label1 = MakeLabel();
    Label2 = MakeLabel();
    Label3 = MakeLabel();
    CodeGen2(CONDOP, Label1, Label2, NoLabel);
    DecrementFrameSize();
    CodeGen1(GOTOOP, Label3, ProcessNode(Child(T, 2), Label1));
    if (Rank(T) == 3)
      CodeGen0(NOP, ProcessNode(Child(T, 3), Label2));
    else
      CodeGen0(NOP, Label2);
    return (Label3);

  case WhileNode:
    if (CurrLabel == NoLabel)
      Label1 = MakeLabel();
    else
      Label1 = CurrLabel;
    Label2 = MakeLabel();
    Label3 = MakeLabel();
    Expression(Child(T, 1), Label1);
    CodeGen2(CONDOP, Label2, Label3, NoLabel);
    DecrementFrameSize();
    CodeGen1(GOTOOP, Label1, ProcessNode(Child(T, 2), Label2));
    return (Label3);

  case ForNode:
    Expression(Child(T, 2), CurrLabel);
    Reference(Child(T, 1), LeftMode, NoLabel);
    Label1 = MakeLabel();
    Label2 = MakeLabel();
    Label3 = MakeLabel();
    Reference(Child(T, 1), RightMode, Label1);
    Expression(Child(T, 3), NoLabel);
    CodeGen1(BOPOP, BLE, NoLabel);
    DecrementFrameSize();
    CodeGen2(CONDOP, Label2, Label3, NoLabel);
    DecrementFrameSize();
    Label4 = ProcessNode(Child(T, 4), Label2);
    Reference(Child(T, 1), RightMode, Label4);
    CodeGen1(LITOP, MakeStringOf(1), NoLabel);
    IncrementFrameSize();
    CodeGen1(BOPOP, BPLUS, NoLabel);
    DecrementFrameSize();
    Reference(Child(T, 1), LeftMode, NoLabel);
    CodeGen1(GOTOOP, Label1, NoLabel);
    return (Label3);

  case ForDownNode:
    Expression(Child(T, 2), CurrLabel);
    Reference(Child(T, 1), LeftMode, NoLabel);
    Label1 = MakeLabel();
    Label2 = MakeLabel();
    Label3 = MakeLabel();
    Reference(Child(T, 1), RightMode, Label1);
    Expression(Child(T, 3), NoLabel);
    CodeGen1(BOPOP, BGE, NoLabel);
    DecrementFrameSize();
    CodeGen2(CONDOP, Label2, Label3, NoLabel);
    DecrementFrameSize();
    Label4 = ProcessNode(Child(T, 4), Label2);
    Reference(Child(T, 1), RightMode, Label4);
    CodeGen1(LITOP, MakeStringOf(1), NoLabel);
    IncrementFrameSize();
    CodeGen1(BOPOP, BMINUS, NoLabel);
    DecrementFrameSize();
    Reference(Child(T, 1), LeftMode, NoLabel);
    CodeGen1(GOTOOP, Label1, NoLabel);
    return (Label3);

  case RepeatNode:
    if (CurrLabel == NoLabel)
      Label1 = MakeLabel();
    else
      Label1 = CurrLabel;
    Label2 = Label1;
    for (Kid = 1; Kid < NKids(T); Kid++)
      Label2 = ProcessNode(Child(T, Kid), Label2);
    Expression(Child(T, NKids(T)), Label2);
    Label3 = MakeLabel();
    CodeGen2(CONDOP, Label3, Label1, NoLabel);
    DecrementFrameSize();
    return (Label3);

  case LoopNode:
    {
       Clabel SavedExitLabel = CurrentExitLabel;
       Label1 = MakeLabel();
       if (CurrLabel == NoLabel)
           CodeGen0(NOP, Label1);
       else
           Label1 = CurrLabel;
       Label2 = MakeLabel();
       CurrentExitLabel = Label2;
       Label3 = Label1;
       for (Kid = 1; Kid <= NKids(T); Kid++)
           Label3 = ProcessNode(Child(T, Kid), Label3);
       CodeGen1(GOTOOP, Label1, Label3);
       CurrentExitLabel = SavedExitLabel;
       return (Label2);
    }

  case ExitNode:
    CodeGen1(GOTOOP, CurrentExitLabel, CurrLabel);
    return (MakeLabel());

  case CaseNode:
    Expression(Child(T, 1), CurrLabel);
    Label1 = MakeLabel();
    Label2 = MakeLabel();
    
    for (Kid = 2; Kid < NKids(T); Kid++) {
       TreeNode Clause = Child(T, Kid);
       Label3 = MakeLabel();
       for (k = 1; k < NKids(Clause); k++) {
          CodeGen0(DUPOP, Label2);
          IncrementFrameSize();
          TreeNode LabelNode = Child(Clause, k);
          if (NodeName(LabelNode) == IntegerNode) {
             CodeGen1(LITOP, NodeName(Child(LabelNode, 1)), NoLabel);
             IncrementFrameSize();
             CodeGen1(BOPOP, BEQ, NoLabel);
             DecrementFrameSize();
             Label2 = MakeLabel();
             CodeGen2(CONDOP, Label3, Label2, NoLabel);
             DecrementFrameSize();
          } else if (NodeName(LabelNode) == DotDotNode) {
             CodeGen0(DUPOP, NoLabel);
             IncrementFrameSize();
             CodeGen1(LITOP, NodeName(Child(LabelNode, 1)), NoLabel);
             IncrementFrameSize();
             CodeGen1(BOPOP, BGE, NoLabel);
             DecrementFrameSize();
             Label4 = MakeLabel();
             Label5 = MakeLabel();
             CodeGen2(CONDOP, Label4, Label5, NoLabel);
             DecrementFrameSize();
             
             CodeGen0(DUPOP, Label4);
             IncrementFrameSize();
             CodeGen1(LITOP, NodeName(Child(LabelNode, 2)), NoLabel);
             IncrementFrameSize();
             CodeGen1(BOPOP, BLE, NoLabel);
             DecrementFrameSize();
             
             Label2 = MakeLabel();
             CodeGen2(CONDOP, Label3, Label2, Label5);
             DecrementFrameSize();
          }
       }
       CodeGen1(POPOP, MakeStringOf(1), Label3);
       DecrementFrameSize();
       Label4 = ProcessNode(Child(Clause, NKids(Clause)), NoLabel);
       CodeGen1(GOTOOP, Label1, Label4);
    }
    
    if (NodeName(Child(T, NKids(T))) == OtherwiseNode) {
       CodeGen1(POPOP, MakeStringOf(1), Label2);
       DecrementFrameSize();
       Label4 = NoLabel;
       if (NKids(Child(T, NKids(T))) > 0)
         Label4 = ProcessNode(Child(Child(T, NKids(T)), 1), NoLabel);
       CodeGen1(GOTOOP, Label1, Label4);
    } else {
       CodeGen1(POPOP, MakeStringOf(1), Label2);
       DecrementFrameSize();
       CodeGen1(GOTOOP, Label1, NoLabel);
    }
    return (Label1);

  case SwapNode:
    Expression(Child(T, 1), CurrLabel);
    Expression(Child(T, 2), NoLabel);
    Reference(Child(T, 1), LeftMode, NoLabel);
    Reference(Child(T, 2), LeftMode, NoLabel);
    return (NoLabel);

  case NullNode:
    return (CurrLabel);

  default:
    ReportTreeErrorAt(T);
    printf("<<< CODE GENERATOR >>> : UNKNOWN NODE NAME ");
    Write_String(stdout, NodeName(T));
    printf("\n");

  } /* end switch */
} /* end ProcessNode */
