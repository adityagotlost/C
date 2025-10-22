#include <stdio.h>

int main() {

    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Modulus\n");
    printf("5. Division\n");
    int a,b,c,d,e,f,g,h;
    printf("enter value of a:\n");
    scanf("%d", &a);
    printf("enter value of b:\n");
    scanf("%d", &b);
    printf("enter value of c:\n");
    scanf("%d", &c);
    printf("Enter your choice (1-5):\n");
    scanf("%d", &d);

    switch(d) {
        case 1: d = a + b;
            printf("Addition of two no. = %d\n", d);
            break;
        case 2: e = b - c;
            printf("Subtraction of two no. = %d\n", e);
            break;
        case 3: f = b * c;
            printf("Multiplication of two no. = %d\n", f);
            break;
        case 4: g = b % c;
            printf("Modulus of two no. = %d\n", g);
            break;
        case 5: h = b / c;
            printf("Division of %d and %d = %d\n", b, c, h);
            break;
        default:
            printf("Wrong choice!\n");
    }
    

    return 0;
}