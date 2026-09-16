#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Lex.h"

int main(int argc, char** args){

    printf("%d", argc);
    if(argc != 2){ //For now, take in exactly one file
        printf("Usage: Redd <filePath.txt>");
        return 0;
    }

    //char* filename = args[2];
    //FILE* codeFile

    return 0;
}
