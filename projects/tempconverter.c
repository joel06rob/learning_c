#include <stdio.h>
#include <stdbool.h>

int main(){

    char name[50] = "";
    char userselection;
    float currenttemp = 0.0f;
    float currenttemp_celsius = 0.0f;
    float currenttemp_fahrenheit = 0.0f;

    //Inputs
    printf("Please enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Please select your temperature measurement unit\n C - Celsius \n F - Fahrenheit");
    scanf(" %c", &userselection);

    //Determine measurements
    switch(userselection){
        case 'C':
        case 'c':
            userselection = 'C';
            printf("Celsius selected\n");
            break;
        case 'F':
        case 'f':
            userselection = 'F';
            printf("Fahrenheit selected\n");
            break;
        default:
            printf("Error - Please enter a valid selection (C or F)\n");
    }

    //Input temperature
    printf("Please input the current temperature in %c :", userselection);
    scanf(" %f", &currenttemp);

    //TODO: Add validation

    //Outputs (Menu Selection)
    printf("==============================\nWELCOME TO THE TEMP CONVERTER %s\n==============================\n", name);
    printf("CURRENT TEMPERATURE (%c): %.1f\n", userselection, currenttemp);
    printf("SELECT OPTION:\n>CONVERT TEMP\n>CHANGE TEMP\n>CHECK TEMP\n");



    return 0;
}