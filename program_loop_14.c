/* sum of odd numbers*/

#include <stdio.h>
int main(){

    int j;
    int k;
    int sum = 0;

    printf("Enter the value of k: ");
    scanf("%d", &k);
    for( j=1; j<=k; j+=2){
        sum = sum +j;
    }
    printf("Sum of odd numbers is: %d\n", sum);
    return 0;
}