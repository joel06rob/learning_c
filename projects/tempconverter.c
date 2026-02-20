#include <stdio.h>
#include <stdbool.h>

int main(){

    char name[50] = "";
    char userselection;
    int menuselection;
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
    if(userselection == 'C'){
        currenttemp_celsius = currenttemp;
    }
    else{
        currenttemp_fahrenheit = currenttemp;
    }

    //TODO: Add validation

    //Outputs (Menu Selection)
    printf("==============================\nWELCOME TO THE TEMP CONVERTER %s\n==============================\n", name);
    printf("CURRENT TEMPERATURE (%c): %.1f\n", userselection, currenttemp);
    printf("SELECT OPTION:\n1>CONVERT TEMP\n2>CHANGE TEMP\n3>CHECK TEMP\n");

    printf("ENTER COMMAND:");
    scanf(" %d", &menuselection);

    //Commands (Menu Selection)
    switch(menuselection){
        case 1:
            if(userselection == 'C'){
                currenttemp_fahrenheit = (currenttemp_celsius * 1.8) + 32;
                printf("CONVERTED TEMP (F): %.1f\n", currenttemp_fahrenheit);
            }
            else{
                currenttemp_celsius = (currenttemp_fahrenheit - 32) / 1.8;
                printf("CONVERTED TEMP (C): %.1f\n", currenttemp_celsius);
            }
            break;
        case 2:
            printf("Please input the new temperature in %c :", userselection);
            scanf(" %f", &currenttemp);
            printf("CURRENT TEMPERATURE (%c): %.1f\n", userselection, currenttemp);
            break;
        case 3:
            if(userselection == 'C'){
                if(currenttemp > 30.0){
                    printf("TEMPERATURE TOO HIGH!");
                }
            }
            else{
                if(currenttemp > 86.0){
                    printf("TEMPERATURE TOO HIGH!");
                }
            }
            break;
        
        
        default:
            printf("Error - Please enter a valid selection (C or F)\n");
    }

    return 0;
}