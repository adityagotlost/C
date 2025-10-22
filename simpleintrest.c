#include <stdio.h>

int main() {
    float P, N, R;

    printf("Enter principal amount: ");
    scanf("%f", &P);

    printf("Enter time duration: ");
    scanf("%f", &N);

    printf("Enter rate of interest: ");
    scanf("%f", &R);

    float SI = (P * N * R) / 100;
    printf("Simple Interest is: %.2f\n", SI);
    return 0;
}