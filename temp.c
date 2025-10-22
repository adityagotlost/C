#include <stdio.h>

int main(){
    int temp;

    printf("Enter the Temprature: ");
    scanf("%d",&temp);

    if (temp < 0)
    printf("Freezing Weather");

    if(0-10)
    printf("Very Cold Weather");

    if(10-20)
    printf("Cold Weather");

    if(20-30)
    printf("Normal Weather");
    
    if(30-40)
    printf("Hot Weather");

}