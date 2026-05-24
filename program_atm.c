/* write an atm program with choices - checkbalance, withdraw, deposit, exit */

#include <stdio.h>
int main(){

    int choice;

    do{

    printf("\n------ATM Program------\n");
    printf(" 1. Check Balance\n");
    printf(" 2. Withdraw\n");
    printf(" 3. Deposit\n");
    printf(" 4. Exit\n");
    printf(" Enter your Choice");
    scanf("%d", &choice);

    if(choice==1){
        printf(" Your balance is 2000\n");

    } else if(choice==2){
        printf(" withdraw successful");

    } else if(choice==3){
        printf(" deposit successful");

    } else if(choice==4){
        printf(" Thankyou for using our ATM. Goodbye!");

    } else {
        printf(" Invalid choice. Please try again.");
    }
    
    } while(choice!=4);
return 0;
}