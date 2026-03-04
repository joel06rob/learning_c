#include <stdio.h>
#include <string.h>

int main(){


    //Each element can be in different memory locations
    char fruits[][10] = {"Apple", "Banana", "Cherry", "Lemon"};
    int size = sizeof(fruits) / sizeof(fruits[0]);


    for(int i = 0; i < size; i++){
        printf("%s \n", fruits[i]);
    }


    //Exercise

    //Setting array to 0 clears out garbage values
    char names[3][25] = {0};

    printf("Enter Name: ");
    fgets(names[0], sizeof(names[0]), stdin);
    //Remove any whitespace
    names[0][strlen(names[0]) - 1] = '\0';

    printf("Enter Name: ");
    fgets(names[1], sizeof(names[1]), stdin);
    //Remove any whitespace
    names[1][strlen(names[1]) - 1] = '\0';
    
    printf("Enter Name: ");
    fgets(names[2], sizeof(names[2]), stdin);
    //Remove any whitespace
    names[2][strlen(names[2]) - 1] = '\0';


    printf("%s\n", names[0]);
    printf("%s\n", names[1]);
    printf("%s\n", names[2]);


    //** NOTE: A MORE FLEXIBLE WAY TO STORE STRINGS IS VIA POINTERS - char *names[] = {"Alice", "Bob", "Charlie"} SEEN AS IT AVOIDS WASTING SPACE AS SOME STRINGS HAVE DIFFERENTE LENGTHS 

    return 0;
}