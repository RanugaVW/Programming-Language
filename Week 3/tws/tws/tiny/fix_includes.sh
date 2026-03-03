#!/bin/bash
cat << 'INC' > temp.c
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
INC
tail -n +11 CodeGenerator.c >> temp.c
mv temp.c CodeGenerator.c
make CodeGen Constrain
