/* sum and average */

#include <stdio.h>
int main(){

    int sum=0;
    float average;
    int i, n, number;

    printf(" Enter the number of elements: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        printf(" Enter the number: ");
        scanf("%d", &number);
        sum += number;
        
    }
    average = (float)sum / n;
    printf(" Sum: %d\n", sum);
    printf(" Average: %.2f\n", average);
    return 0;
}