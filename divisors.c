#include <stdio.h>

int main() {
    int n, i, R = 1, S;
    
    printf("N: ");
    S = scanf("%d", &n); 

    if (S == 1 && n > 0) {
        printf("Divisors: ");
        for (i = 1; i <= n; i++) 
            if (n % i == 0) printf("%d ", i);
        printf("\n");
        R = 0;
    } else printf("Invalid\n");
    
    return 0;
}