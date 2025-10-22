#include <stdio.h>

int main(void)
{
    // Print brief description
    printf("           Name: Aditya Anand\n");
    printf("           Father's Name: Ajay Kumar\n");
    printf("           Address: Chapra, Bihar\n");
    printf("           Hobbies: Watching Anime, Coding\n\n");

    // Print multiplication table for 4 (1 to 5, 10, 20)
    for (int i = 1; i <= 5; i++) {
        printf("           4 * %d = %d\n", i, 4 * i);
    }
    printf("           --------------\n");
    printf("           4 * 10 = %d\n", 4 * 10);
    printf("           --------------\n");
    printf("           4 * 20 = %d\n", 4 * 20);

    return 0;
}