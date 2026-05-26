/* positive, negative, zero*/

#include <stdio.h>
int main(){
    int i, number;

    printf(" Enter a number: ");
    scanf("%d", &number);

    if(number>0){
        printf(" positive\n");
    }else if(number<0){
        printf(" nagative\n");
    }else{
        printf(" your personality\n");
    }
    return 0;
}