#include <stdio.h>

int main()
{
    float r, circumference;
    float PI = 22.0/7.0;
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);
    circumference = 2 * PI * r;
    printf("The circumference of the circle is: %f\n", circumference);
    return 0;
}