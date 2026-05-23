/* count digits in a number */

#include <stdio.h>
int main(){

    int i;
    int count = 0;
    int number;

    printf("Enter a Number: ");
    scanf("%d", &number);

    while( number != 0){
        number = number / 10;
        count++;

    }
    printf("Digits of the Number is %d\n", count);

    return 0;
}