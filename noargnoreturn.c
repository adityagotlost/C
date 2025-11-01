#include <stdio.h>
int sum();

int main() {
    int a, b;
    printf("enter two values\n");
    scanf("%d %d", &a, &b); 
    sum(a,b);
}


int sum(int c, int d) {
    int sum;
    sum = c + d;
    printf("%d", sum);
    return;
}