#include <stdio.h>

int main() {

    int i1 = 0;
    int sum1 = 0;
    printf("Numbers from 0 to 9 and their sum:\n");
    while(i1 < 10) {
        printf("%d\n", i1);
        sum1 = sum1 + i1;
        i1 = i1 + 1;
    }
    printf("sum=%d\n", sum1);
    printf("\n");

    int i2 = 0;
    int sum2 = 0;
    printf("Even numbers from 0 to 8 and their sum:\n");
    while(i2 < 10) {
        sum2 = sum2 + i2;
        i2 = i2 + 2;
    }
    printf("sum of even no=%d\n", sum2);
    printf("\n");

    int i3 = 1;
    int sum3 = 0;
    printf("Odd numbers from 1 to 9 and their sum:\n");
    while(i3 < 10) {
        printf("%d\n", i3);
        sum3 = sum3 + i3;
        i3 = i3 + 2;
    }
    printf("sum of odd no=%d\n", sum3);
    
    return 0;
}