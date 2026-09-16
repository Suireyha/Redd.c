#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Lex.h"

int main(int argc, char** args){

    printf("Arguments:\t%d\n", argc);
    if(argc != 2){ //For now, take in exactly one file
        printf("Usage: Redd <filePath.txt>\n");
        return 0;
    }

    FILE* codeFile;
    codeFile = fopen(args[1], "r");
    if(codeFile == NULL){
        printf("Error openning file :(\n");
        return 0;
    }

    return 0;
}
