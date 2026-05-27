/* Write a function square(int n) that returns n² */

#include <stdio.h>
int square(int n){
    return n*n;
}
int main(){

    int result = square(2);

    printf("%d\n", result);

    return 0;
}