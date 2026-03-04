#include <stdio.h>

typedef enum{
    SUNDAY = 1, MONDAY = 2, TUESDAY = 3 , WEDNESDAY = 4, THURSDAY = 5, FRIDAY = 6, SATURDAY = 7
}Day;

int main(){

    //enum - data type that consists of a set of named integer const's
    Day today = SUNDAY;

    printf("%d", today);

    if(today == SATURDAY || today == SUNDAY){
        printf("\nIts the weekend");
    }
    else{
        printf("\nIts a weekday");
    }

    //Ideas: SUCCESS, FAILURE, PENDING

    return 0;
}