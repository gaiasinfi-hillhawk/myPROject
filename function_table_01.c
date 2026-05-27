/*Write a function printTable(int n) that prints multiplication table of n*/

#include <stdio.h>
int PrintTable(int n){
    int i;
    for(i=1; i<=10; i++){
        printf("%dX%d=%d\n", n, i, n*i);
    }
}
int main(){

    PrintTable(10);

    return 0;
}