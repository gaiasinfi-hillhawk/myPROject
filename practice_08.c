/*Sum of n numbers*/

#include <stdio.h>
int main(){
    int i, n, sum;
    sum = 0;

    for(i=0; i<5; i++ ){

    printf(" Enter 5 number%d: \n", i+1);
    scanf("%d", &n);
    sum = sum + n;
    }
    printf("sum is %d\n", sum);
    
    return 0;
}