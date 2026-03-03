#include <stdio.h>


int main(){

    //2d array - Array where each element is an array - array[][] - {{}, {}, {}}

    int numbers[][3] = {{1,2,3}, {4,5,6}, {7,8,9}};

    //printf("%d", numbers[0][2]);

    //Print everything in the array
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", numbers[i][j]);
        }
        printf("\n");

    }

    return 0;
}