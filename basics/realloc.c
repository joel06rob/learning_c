#include <stdio.h>
#include <stdlib.h>

int main(){

    //realloc - Reallocation.
    //Resize previously allocated memory.
    //realloc(pointer, bytes) - A pointer to some old memory + A new size to allocate.

    int numberOfPrices = 0;
    printf("Enter number of prices: ");
    scanf("%d", &numberOfPrices);

    int *prices = malloc(numberOfPrices * sizeof(int));

    if(prices == NULL){
        printf("Memory Allocation Failed. Exiting Program...");
        return 1;
    }

    for(int i = 0; i < numberOfPrices; i++){
        printf("\nEnter Price: ");
        scanf(" %d", &prices[i]);
    }

    int newNumberOfPrices = 0;
    printf("\nEnter a new number of prices: ");
    scanf("%d", &newNumberOfPrices);

    //Common convention for realloc - create a temp pointer memory location
    //realloc will return a pointer to new memory and copy the values stored in our old memory to the new memory location
    int *temp = realloc(prices, newNumberOfPrices * sizeof(int));

    if(temp == NULL){
        printf("Memory Reallocation Failed. Exiting Program...");
        return 1;
    }
    else{
        //We can now change the prices pointer to point to the location of the new memory (temp).
        prices = temp;
        for(int i = numberOfPrices; i < newNumberOfPrices; i++){
        printf("\nEnter Price: ");
        scanf(" %d", &prices[i]);
        }
    }

    for(int i = 0; i < newNumberOfPrices; i++){
        printf("%d ", prices[i]);
    }

    free(prices);
    prices = NULL;

    return 0;
}