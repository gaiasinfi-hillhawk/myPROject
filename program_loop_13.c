/* sum of even numbers*/

#include <stdio.h>
int main(){

    int i; int j;
    int sum = 0;
    printf(" Enter the value: ");
    scanf("%d", &j);

    for(i=2; i<=j; i+=2){
        sum = sum + i;
        printf("%d\n", i);
    }
    printf("Sum of even numbers is: %d\n", sum);
    return 0;   
}