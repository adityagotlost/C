#include <stdio.h>
int main(){
    int i=1;
    int sum=0;
    while(i<10){
        printf("%d\n",i);
        sum=sum+i;
        i=i+2;
    }
    printf("sum of odd no=%d\n",sum);
    return 0;
}