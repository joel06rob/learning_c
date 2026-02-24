#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int maint(){

    //Set the seed for rand to the current time.
    srand(time(NULL));

    int randomNum = rand() & 2;

    printf("%d", randomNum);

    return 0;
}