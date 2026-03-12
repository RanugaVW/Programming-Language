sed -i '184,199c\
extern void DumpManuelTree(FILE *f, TREENODE *node)\n\
{\n\
   TREENODE *kid;\n\
\n\
   if (node == NULL) return;\n\
\n\
   kid = GetChild(node,1);\n\
   while (kid) \n\
   {\n\
      DumpManuelTree(f,kid);\n\
      kid = NextSibling(kid);\n\
   }\n\
    \n\
   const char *s = "(null)";\n\
   if (node->string != NULL) {\n\
      if ((unsigned long)node->string < 4096) s = "(invalid-low)";\n\
      else s = node->string;\n\
   }\n\
   fprintf(f,"%s\\n", s);\n\
   fprintf(f,"L%d/C%d\\n",node->line,node->column);\n\
   fprintf(f,"%d\\n",ChildCount(node));\n\
}
' /home/ranuga-weerasekara/Desktop/PL/Programming-Language/Week\ 3/tws/tws/parser/Trees.c
