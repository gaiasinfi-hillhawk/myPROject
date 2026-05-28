/*Write a program that:

Takes 5 numbers from user into an array
Prints all 5 numbers
Prints their sum
Prints the maximum*/

#include <stdio.h>
int main(){

    int i;
    int sum = 0;
    int max;

    int arr[5];

    //TAKING INPUT

    printf(" Enter Five Numbers: ");
    for(i=0; i<5; i++){
        scanf("%d", &arr[i]);
    }
    //PRINTING ARRAY ELEMENTS

    printf("The Numbers are: \n");

    for(i=0; i<5; i++){
        printf("%d\n", arr[i]);
    }
    //FINDING SUM

    for(i=1; i<5; i++){
        sum = sum + arr[i];
    }
    printf("\nsum = %d\n", sum);

    //FINDING MAXIMUM

    max = arr[0];
    for(i=1; i<5; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    printf("max = %d\n", max);

    return 0;


}