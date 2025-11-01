#include <stdio.h>
#include <string.h>
int main() {
    char str1[] = "Hello";
    char str2[] = "Hello";
    if (strcmp(str1, str2) == 0)
        printf("Equal");
    else
        printf("Not Equal");
    return 0;
}