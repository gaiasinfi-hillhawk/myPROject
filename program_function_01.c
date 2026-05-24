/*Write a function called isEven that:

Takes one number
Returns 1 if even
Returns 0 if odd*/

#include <stdio.h>

int isEven(int number){
    if(number%2==0){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int number, result;
    printf(" Enter a number: ");
    scanf("%d", &number);
    result = isEven(number);
    if(result==1){
        printf(" Even\n");

    } else{
        printf("odd\n");
    }
    return 0;
}

