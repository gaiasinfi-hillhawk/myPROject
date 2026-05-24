/* function to find maximum of two numbers*/

#include <stdio.h>
int maximumnumber (int a, int b){
    if(a>b){
        return a;
    } else{
        return b;
    }
}

    int main(){

        int number1, number2;

        printf(" Enter number1: ");
        scanf("%d", &number1);

        printf(" Enter number2: ");
        scanf("%d", &number2);

        printf(" The maximum of %d is %d\n", number1, number2, maximumnumber(number1, number2));
        return 0;
    }
