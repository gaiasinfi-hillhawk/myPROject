/*minimum(int a, int b) that returns the smaller number*/

# include <stdio.h>
int min(int a, int b){
    if(a<b){
    return a;
} else {
    return b;
}
}

int main(){

    int result;
    result = min(4,5);
    printf("min is %d\n", result);
    return 0;
}