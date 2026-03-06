#include <stdio.h>
#include <stdlib.h>

int main(){

    //calloc - contiguous allocation or clearing allocation
    //allocates memory dynamically. sets all allocated bytes to 0 -  safer than malloc as we take an extra step to 0 all the previous values stored in memory.

    int numberOfPlayers = 0;
    printf("Enter number of players: ");
    scanf("%d", &numberOfPlayers);

    int *scores = calloc(numberOfPlayers, sizeof(int));

    if(scores == NULL){
        printf("Memory Allocation Failed. Exiting Program...");
        return 1;
    }

    for(int i = 0; i < numberOfPlayers; i++){
        printf("%d ", scores[i]);
    }

    free(scores);
    scores = NULL;

    return 0;
}