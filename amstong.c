#include <stdio.h>

int main() {
    int a, num, rem, result = 0;
    printf("Enter an integer: ");
    scanf("%d", &a);

    num = a;

    while (num != 0) {
        rem = num % 10;
        result += rem * rem * rem;
        num /= 10;
    }

    if (result == a) {
        printf("%d is Armstrong number.\n", a);
    } else {
        printf("%d is not Armstrong number.\n", a);
    }

    return 0;
}