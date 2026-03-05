#include <stdio.h>

int main(){

    //Write a file

    //fopen() - file open, create file. returns NULL if unable to open a file
    FILE *pFile = fopen("output.txt", "w");

    char text[] = "Hello World";

    if(pFile == NULL){
        printf("Could not open the file");
        return 1;
    }

    //File printf (file pointer, format specifier of type of data, string)
    fprintf(pFile, "%s", text);
    printf("File written successfully\n");

    fclose(pFile);

    //Read the file

    FILE *pFile2 = fopen("output.txt", "r");
    //Buffer - temporarily hold data ready for us to read
    char buffer[1024] = {0};

    if(pFile2 == NULL){
        printf("Could not open the file");
        return 1;
    }

    while(fgets(buffer, sizeof(buffer), pFile2) != NULL){
        printf("%s", buffer);
    }
    

    fclose(pFile2);

    return 0;
}