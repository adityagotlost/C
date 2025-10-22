#include <stdio.h>

int main()
{
    int rollno, maths, physics, english, chemistry, cs;
    printf("Roll no. :");
    scanf("%d", &rollno);
    printf("Enter Marks: \n");
    printf("Maths: ");
    scanf("%d", &maths);
    printf("Physics: ");
    scanf("%d", &physics);
    printf("English: ");
    scanf("%d", &english);
    printf("Chemistry: ");
    scanf("%d", &chemistry);
    printf("Computer Science: ");
    scanf("%d", &cs);

    int total = maths + physics + english + chemistry + cs;
    float p = (total / 500.0) * 100;
    printf("______________________________\n");
    printf("Marksheet of Student\n");
    printf("______________________________\n");
    printf("Roll no.:    %d\n", rollno);
    printf("______________________________\n");
    printf("Physics:             %d\n", physics);
    printf("Maths:               %d\n", maths);
    printf("English:             %d\n", english);
    printf("Chemistry:           %d\n", chemistry);
    printf("Computer Science:    %d\n", cs);
    printf("______________________________\n");
    printf("Total Marks:         %d\n", total);
    printf("______________________________\n");
    if (p >= 40) {
        printf("Percentage:          %.2f\n", p);
        printf("______________________________\n");
    } else {
        printf("Fail: Better luck Next time\n");
        printf("______________________________\n");
    }

    printf("Result: ");
    if (p >= 40)
        printf("Pass\n");
    else
        printf("Fail\n");

    printf("Grade: ");
    if (p >= 90)
        printf("A");
    else if (p >= 80)
        printf("B");
    else if (p >= 70)
        printf("C");
    else if (p >= 60)
        printf("D");
    else if (p >= 40)
        printf("E");
    else if (p < 40)
        printf("You're a Genius\nBest Of Luck For Your Future");

    return 0;
}
