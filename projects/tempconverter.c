#include <stdio.h>
#include <stdbool.h>

int main(){

    char name[50] = "";
    char userselection;
    float currenttemp_celsius = 0.0f;
    float currenttemp_fahrenheit = 0.0f;

    //Inputs
    printf("Please enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Please select your temperature measurement unit\n C - Celsius \n F - Fahrenheit");
    scanf(" %c", &userselection);

    //determine measurements
    switch(userselection){
        case 'C':
        case 'c':
            printf("Celsius selected");
            break;
        case 'F':
        case 'f':
            printf("Fahrenheit selected");
            break;
        default:
            printf("Error - Please enter a valid selection (C or F)");
    }


    return 0;
}