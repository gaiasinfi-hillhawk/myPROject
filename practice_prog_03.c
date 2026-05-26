/* sum and average of n numbers using loop*/

#include <stdio.h>
int main(){

    int i, number, sum;
    float average;
    sum = 0;

    for(i=1; i<=10; i++){

    printf(" Enter number %d: ", i);
    scanf("%d", &number);

    sum = sum + (float)number;

    }
     average = sum/10.0;
     printf(" sum is %d", sum);
     printf(" average is %f", average);

     return 0;
    
}