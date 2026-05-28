/* array input and print */

#include<stdio.h>
int main(){
    int arr[5];
    int i;

    printf("Enter five numbers:\n");

    for(i=0; i<5; i++){
    scanf("%d", &arr[i]);
    }

    printf("Five array elements are:\n");

    for(i=0; i<5; i++){
        printf("%d\n", arr[i]);
    }
    return 0;
}