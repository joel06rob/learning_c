#include <stdio.h>
#include <stdbool.h>

int main() {

    int temp = -1;
    bool heatingOn = false;

    if(temp > 0 && temp < 30){
        printf("The temp is good\n");
    }
    else if(temp < 0 || temp == 0){
        printf("Its cold\n");
    }
    else{
        printf("The temp is bad\n");
    }

    if(!heatingOn){
        printf("Turn the heating on\n");
    }
    else{
        printf("The heating is on\n");
    }

    return 0;
}