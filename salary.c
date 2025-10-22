#include <stdio.h>

int main() {
    float salary;

    printf("Enter your salary: ");
    scanf("%f", &salary);

    printf("Base Salary: %.2f\n", salary);
    printf("DA: %.2f\n", salary * 0.20);
    printf("HRA: %.2f\n", salary *0.10);
    printf("TA: %.2f\n",salary *0.05);
    printf("Medical: %.2f\n",salary *0.05);
    printf("PF: %.2f\n", salary * 0.10);
    printf("Total Salary: %.2f", salary + (salary*0.20) + (salary*0.10) + (salary*0.05) + (salary*0.05) - (salary*0.10));

    return 0;
}
