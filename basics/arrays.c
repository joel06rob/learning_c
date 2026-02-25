#include <stdio.h>

int main(){

    int numbers[] = {1,2,3,4,5,6,7};

    //How to get the size of the array - Total length of the array is 28 bytes, One element is 4 bytes.
    printf("%d\n", sizeof(numbers));
    printf("%d\n", sizeof(numbers[0]));
    printf("%d\n", sizeof(numbers)/sizeof(numbers[0]));

    int numbersLength = sizeof(numbers)/sizeof(numbers[0]);

    
    for(int i=0; i < numbersLength; i++){
        printf("Index(%d) = %d\n", i, numbers[i]) ;
       
    }
    

    return 0;
}