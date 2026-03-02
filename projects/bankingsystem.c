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

        switch(choice){
            case 1:
                printf("\nFetching your balance...\n");
                checkBalance(balance);
                break;
            case 2:
                balance += deposit();
                break;
            case 3:
                balance -= withdraw(balance);
                break;
            case 4:
                printf("\nWhich transactions would you like to view?\nI - In\nO - Out");
                break;
            default:
                printf("\nInvalid Choice - Please select 1-5.");
        }

    }while(choice != 5);

    return 0;
}

void checkBalance(float balance){
    printf("BALANCE=================\nYOUR ACCOUNT: %.2f\n========================", balance);
}

float deposit(){

    float depositAmount = 0.0f;

    
    printf("\nDEPOSIT=================\nENTER AMOUNT:");
    scanf(" %f", &depositAmount);

    if(depositAmount < 0){
        printf("\nINVALID DEPOSIT AMOUNT!");
        return 0.0f;
    }
    else{
        printf("\n*Successfully deposited %.2f into account*", depositAmount);
        return depositAmount;
    }
}

float withdraw(float balance){

    float withdrawAmount = 0.0f;

    printf("\nWITHDRAW=================\nENTER AMOUNT:");
    scanf(" %f", &withdrawAmount);

    if(withdrawAmount < 0 || withdrawAmount > balance){
        printf("\nINVALID WITHDRAW AMOUNT!");
        return 0.0f;
    }
    else{
        printf("\n*Successfully withdrew %.2f into account*", withdrawAmount);
        return withdrawAmount;
    }


    return 0.0f;
}