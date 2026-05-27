/*sum(int a, int b) that returns sum of two numbers.*/

#include <stdio.h>
int sum(int a, int b){
return (a+b);
}

int main(){
    int result;
    result = sum(3, 7);
    printf("sum is %d\n", result);

    return 0;
}