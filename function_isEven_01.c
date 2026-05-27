/*isEven(int n) returns 1 if even, 0 if odd*/

#include <stdio.h>
int isEven(int n){
    if(n%2==0){
        return 1;
    } else {
        return 0;
    }
}

int main(){
    int result;
    result = isEven(8);
    printf("isEven is %d\n", result);

    return 0;
}