#include <stdio.h>

void birthday(int *age);

int main(){

    //pointer - variable that stores the memory address of another variable.
    //helps avoid wasting memory by allowing you to pass the address of a large data structure instead of copying the entire data.

    int age = 20;

    //Create a pointer - derefence operator (*) tells C compiler we're storing a pointer.
    int *pAge = &age;



    //%p is format specifier for pointer/address
    printf("%p\n", &age);
    printf("%p", pAge);

    birthday(pAge);

    printf("\nYou are %d", age);

    return 0;
}


void birthday(int *age){
    //pass by value - we're passing a copy of that value to the function, not changing the original value --> pass by reference fixes this (passing pointer)
   (*age)++;


}