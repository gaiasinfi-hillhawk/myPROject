/* fizzbuzz program using a bit efficient method */

#include <stdio.h>
int main (){

    int fizz = 0;
    int buzz = 0;
    int number;
    int i = 1;

    

    printf(" Enter the number: ");
    scanf("%d", &number);

    for( i = 1; i<=number; i++){

        fizz++;
        buzz++;

        if(fizz==3 && buzz==5){
            printf("fizzbuzz");
            fizz=0;
            buzz=0;
        } 
        else if(fizz==3){
            printf("fizz\n");
            fizz=0;

        }
        else if(buzz==5){
            printf("buzz\n");
            buzz=0;
        }
        else{
            printf("%d\n", i);
        }

    }
    return 0;
}