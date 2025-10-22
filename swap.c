#include <stdio.h>
//write a program that accept two values swap this values without using 3rd variable 
int main(){
    int x,y;
    printf("1st variable: ");
    scanf("%d",&x);
    printf("2nd variable: ");
    scanf("%d",&y);
    x = x + y;
    y = x - y;
    x = x - y;
    printf("swap: \n");
    printf("1st variable: %d\n", x);
    printf("2nd variable: %d\n", y);
    
    return 0; 
}
