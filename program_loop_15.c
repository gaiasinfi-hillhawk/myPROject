/* find cube of numbers 1 to 10*/

#include <stdio.h>
int main(){

    int i;
    int cube;

    for(i=1; i<=10; i++){
        cube = i*i*i;
        printf(" %d cube is %d\n", i, cube);

    }
    return 0;
}