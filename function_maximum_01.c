/*maximum(int a, int b) that returns the larger number.*/

#include <stdio.h>
int max(int a, int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}

int main(){
    int result = max(3, 5);
    printf(" max is %d\n", result);

    return 0;
}