#include <stdio.h>
#include <string.h>

int main(){
    //While - continue the code while the condition remains true
    //For -

    char name[50];
    int number = 0;
    
    while (strlen(name) == 0){
        printf("Enter your name: ");
        fgets(name, sizeof(name), stdin);
        name[strlen(name) - 1] = '\0';
    }

    //Do While - Do the code first,THEN check if the condition is true or not.
    do {
        printf("Enter a number greater than 10: ");
        scanf("%d", &number);
    }while (number <=10);
    

    return 0;  
}