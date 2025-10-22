#include <stdio.h>

int main(){
    int d;
    printf("Enter number of days: ");
    scanf("%d", &d);
    int years = d/365;
    int weeks = (d-365*years)/7;
    int days = (d-365*years-weeks*7);

    printf("years: %d\n",years);
    printf("weeks: %d\n",weeks);
    printf("days: %d\n",days);

    return  0;
}