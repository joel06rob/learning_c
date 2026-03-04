#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){

    //--IF STATEMENTS--
    //Check if string is empty
    char name[50] = "";
    
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    //Remove new line character
    name[strlen(name) - 1] = '\0';

    if(strlen(name) == 0){
        printf("Error: empty name");  
    }
    else{
        printf("Hello there %s \n", name);
    }


    //--SWITCH STATEMENTS--
    //Menu selector

    int menuSelection = 0;
    printf("How are you feeling today \n");
    printf("1 - Happy, 2 - Sad, 3 - Angry, 4 - Tired: ");
    scanf("%d", &menuSelection);

    switch(menuSelection){
        case 1:
            printf("You selected Happy!");
            break;
        case 2:
            printf("You selected Sad!");
            break;
        case 3:
            printf("You selected Angry!");
        case 4:
            printf("You selected Tired!");
            break;
        default:
            printf("Please enter a menu selection");
    }


    //Ternary

    //Shorthand if else statements
    //(condition) ? value_if_true : value_if_false;
    int x = 5;
    int y = 6;
    int max = (x > y) ? x : y;

    printf("\n%d", max);

    bool isActive = true;

    printf("\n%s", (isActive) ? "Active" : "Inactive");


    return 0;
}