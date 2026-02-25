#include <stdio.h>

void checkBalance(float balance);
float deposit();
float withdraw(float balance);
void viewTransactions(); //TODO: Pass in array - transactions[]

int main(){

    //BANKING SYSTEM

    int choice = 0;
    float balance = 0.0f;
    int inTransactions[] = {};
    int outTransactions[] = {};
    

    printf("$===================================\n\tWELCOME TO THE BANK\n===================================$\n");

    //MENU SELECTION
    do{
        printf("\nPLEASE SELECT AN OPTION:");
        printf("\n1 - Check Balance");
        printf("\n2 - Deposit Money");
        printf("\n3 - Withdraw Money");
        printf("\n4 - View Transactions");
        printf("\n5 - Exit");
        printf("\nENTER: ");
        scanf(" %d", &choice);

    }while(choice != 5);

    return 0;
}