/* celsiusToFahrenheit(float c) that converts temperature.*/

#include <stdio.h>
float celsiusToFahrenheit( float c){
  return (c * 9.0 / 5.0) + 32;
}
int main(){

    float c, f;
    printf("Enter temp in celsius: ");
    scanf("%f", &c);

     f = celsiusToFahrenheit(c);

    printf(" temp in fahrenheit is %f\n", f);


    return 0;
}