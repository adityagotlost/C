#include <stdio.h>

void main() {
    float c=25,f=50,
    fahrenheit= (c*9/5)+32, celsius= (f-32)*5/9;

    printf("Celsius to Fahrenheit = (c*9/5)+32 \n");
    //printf("Celsius to Fahrenheit = (25*9/5)+32 \n");
    printf("Celsius to Fahrenheit = %.2f \n", fahrenheit);

    printf("Fahrenheit to Celsius = (f-32)*5/9 \n");
    //printf("Fahrenheit to Celsius = (50-32)*5/9 \n");
    printf("Fahrenheit to Celsius = %.2f \n", celsius);

    return 0;
}