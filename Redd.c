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

    FILE* file;
    file = fopen(args[1], "r");

    if(file == NULL){
        printf("Error openning file :(\n");
        return 0;
    }

    fseek(file, 0, SEEK_END); //Move file pointer to end of file
    long size = ftell(file); //Apparently this give me the size of file in bytes
    rewind(file);

    char *incode = malloc(size + 1); //String the exact size of file pllus null term
    fread(incode, 1, size, file);
    incode[size] = '\0';

    printf("%s", incode);


    return 0;
}
