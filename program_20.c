/* take a number from a user and print if positive, negative or zero*/

#include <stdio.h>
int main(){

    int number;

    printf(" Enter a number: ");
    scanf("%d", &number);

    if(number>0){
        printf(" The number is positive\n");
    } else if(number<0){
        printf(" The number is negative\n");
    } else{
        printf(" Number is zero\n");
    }
    
    return 0;
}