#include <stdio.h>

int main(){
    char x;

    printf("Enter a character for ASCII value: ");
    scanf("%c", &x);

    printf("Enter a %c character \n", x);

    printf("The ASCII value of %c is %d\n",x,x);
    x=x-32;
    printf("Character in Upper case is: %c",x);

    return 0;
}