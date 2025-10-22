#include <stdio.h>

int main()
{

    float a, square, cube;
    printf("enter a number: ");
    scanf("%f", &a);

    square = a * a;
    cube = a * a * a;
    printf("\n Square of no. is %.2f", square);
    printf("\n Cube of no. is %.2f", cube);
    printf("\nSquare + Cube of no. is %.2f", square + cube);
    return 0;
}