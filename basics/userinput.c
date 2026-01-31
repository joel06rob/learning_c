#include <stdio.h>

int main(){

    //undefined behaviour
    char name[30] = "";
    float bankaccount = 0.0f;

    
    //User input
    printf("Name: ");
            //  '&' = At the memory address of this variable + Using fgets for multi word strings
    fgets(name, sizeof(name), stdin);

    printf("Balance: ");
    scanf(" %f", &bankaccount);
    
    printf("Hello %s Welcome to the bank!\n", name);
    printf("Your account: %.2f\n", bankaccount);

    return 0;
}