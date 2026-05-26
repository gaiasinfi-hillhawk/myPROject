/* sum and average of 5 numbers */

#include <stdio.h>
int main(){

    int a, b, c, d, e;
    int sum;
    float average;

    printf(" Enter 5 numbers: ");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    scanf("%d", &e);

    if(a>0 && b>0 && c>0 && d>0 && e>0){
        sum = a+b+c+d+e;

        average = sum/5.0;

        printf(" sum = %d\n", sum);
        printf(" average = %f\n", average);
    } else{

        printf(" not a valid answer ");
    }
    return 0;


}