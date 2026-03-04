#include <stdio.h>

typedef char String[50];


int main(){

    //typedef - gives an existing datatype a 'nickname'.
    //Helps simplify complex types and improves code readability

    String name = "My Name";

    printf("%s", name);

    return 0;  
}