#include <stdio.h>
int main(){
    int i;
    i=0;
    int sum=0;
    while(i<10){
        printf("%d\n",i);
        sum=sum+i;
        i=i+1;
    }
    printf("sum=%d\n",sum);
    return 0;
}