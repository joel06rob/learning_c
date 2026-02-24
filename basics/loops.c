#include <stdio.h>
#include <string.h>
#include <unistd.h> //Mac (Contains sleep function)



int main(){
    //While - continue the code while the condition remains true
    //For - Repeat code a limited # of times (Initialization; Condition; Update)

    //Break & Continue - break = break out of loop, continue = skip current cycle of loop.

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

    for(int i = 0; i<5; i++){
        printf("%d\n", i);
        sleep(1);
    }

    //Count 3 times - Nested Loop
    for(int x = 0; x<3; x++){
        for(int y = 0; y<5; y++){
            printf("%d\n", y);
        }
    }
    

    return 0;  
}