#include <stdio.h>
#include <stdbool.h>
//must include the stdbool for booleans

int main(){

    //Print out hello world
    printf("Hello World\n");
    
    //Variables
    int age = 19;
    char name[] = "Joel";
    bool isCoding = true; //1

    printf("Hello %s\n", name);
    printf("You are %d\n", age);

    if(isCoding){
        printf("You are coding");
    }
    else{
        printf("You are not coding");
    }


    //Format specifiers
    float price = 25.99;
    char currency = '$';
    char product[] = "Hoodie";

    printf("Product Details:\n");
    printf("Paying in %c\n", currency);
    printf("Product: %s\n", product);
    printf("Price: %.2f\n", price);


    //Logical operators
    int num1 = 10;
    int num2 = 2;
    int total = 0;

    //total = num1 + num2;
    //total = num2 - num1;
    //total = num1 * num2;
    //total = num 1 / num2; - Cant retain decimal as integer must be float

    //modulus / remainder
    total = num1 % 2;
    printf("%d\n", total);

    if(total == 0){
        printf("EVEN\n");
    }
    else{
        printf("ODD\n");
    }

    //increment
    num1++;
    printf("%d\n", num1);

    //decrement
    num1--;
    printf("%d\n", num1);

    return 0;
}