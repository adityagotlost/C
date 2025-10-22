#include <stdio.h>
int main()
{
    int a = 5, b = 10, x;
    x = (a < b)? ++a : ++b;
    printf("in x=%d a=%d b=%d\n", x, a, b);
    return 0;
}