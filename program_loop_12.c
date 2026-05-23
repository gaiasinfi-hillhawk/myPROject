/* sum of first natural numbers*/

#include <stdio.h>
int main(){

    int j;
    int k;
    int sum = 0;

    printf(" Enter the value: ");
    scanf("%d", &j);

    for(k=1; k<=j; k++){
        sum = sum + k;
        printf("%d\n", k);

    }
    printf("Sum of first %d natural numbers is: %d\n", j, sum);
    return 0;
}