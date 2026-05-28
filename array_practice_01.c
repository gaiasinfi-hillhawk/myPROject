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
for(i=0; i<5; i++){
    printf("Enter the numbers:\n");
    scanf("%d", &arr[i]);
}
// print all array elements

    printf("The numbers are:\n");
    for(i=0; i<5; i++){
        printf("%d\n", arr[i]);
    }
    //print their sum

    for(i=0; i<5; i++){
        sum = sum + arr[i];
    } 
    printf("sum is %d\n", sum);

    //finding the max

    max = arr[0];
    for(i=1; i<5; i++){
        if(arr[i]>max)
        max = arr[i];
    }
    printf("max is %d\n", max);

    return 0;
}