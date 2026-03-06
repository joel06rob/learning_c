#include <stdio.h>
#include <stdlib.h>

int main(){

    //malloc - a C function that dynamically allocated a specified number of bytes in memory

    //scenario: user inputs the amount of grades (we allocate memory) and we will allocate the size based on that.
    int numberOfGrades = 0;
    printf("Enter number of grades");
    scanf("%d", &numberOfGrades);

    //calculate how much size in memory we need - renting space in the heap so we can use it.
    char *grades = malloc(numberOfGrades * sizeof(char));

    if(grades == NULL){
        printf("Memory Allocation Failed. Exiting Program...");
        return 1;
    }

    for(int i = 0; i < numberOfGrades; i++){
        printf("\nEnter Grade #%d: ", i+1);
        scanf(" %c", &grades[i]);
    }

    for(int i = 0; i < numberOfGrades; i++){
        printf("\n%c", grades[i]);
    }


    free(grades); //returning the rented space back to the heap/os.
    grades = NULL; //avoids dangling pointer - removes pointing to the memory location.


    //note: trying to dereference a null pointer can cause a segmentation fault
    return 0;
}