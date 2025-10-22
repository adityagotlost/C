#include <stdio.h>
int main() {
    int a, b = 0, c, sum = 0;
    printf("Enter a number:");
    scanf("%d", &a);
    while (a) {
        c = a % 10;
        b = b * 10 + c;
        sum = sum + c;
        a = a / 10;
    }
    printf("Reversed number=%d\n", b);
    return 0;
}