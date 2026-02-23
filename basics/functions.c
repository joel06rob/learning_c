#include <stdio.h>

//Function prototype
void functionPrototype();


void getUser(char name[], int age){
    printf("Hello there %s\n", name);
    printf("You are %d\n", age);
}

int getAgeInTen(int age){

    int ageTen = age + 10;

    return ageTen;
}

int main() {

    char name[] = "John";
    int age = 19;
    

    getUser(name, age);
    age = getAgeInTen(age);
    printf("In 10 years you will be %d", age);

    functionPrototype();

    return 0;
}

void functionPrototype(){
    printf("\nThis is a FUNCTION PROTOTYPE!\n");
    printf("This allows us to call the method after the main() class.");
}