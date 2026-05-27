/* Write a function isPositive(int n) that returns 1 if positive, 0 if not*/

#include <stdio.h>

int isPositive (int n){
if(n>0){
    return 1;
}else{
    return 0;
}
}
int main(){
    int n = -5;

printf("%d\n", isPositive(n));

    return 0;
}