#include<stdio.h>
 
void main(){
    int a=10, b=5, c=2;
    int sum, diff;
    sum = a + b + c;
    diff = a - b;
    printf("The sum of %d, %d and %d = %d \n", a, b, c, sum );
    printf("The sum of %d, %d and %d = %d \n", b, c, a, sum);
    printf("The difference of %d and %d = %d \n", a, b, diff);

    return;
}      