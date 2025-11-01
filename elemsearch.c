#include <stdio.h>

int main() {
    int elem;
    int arr[5], i, found = 0;

    printf("Enter elements: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter element to search: ");
    scanf("%d", &elem);

    for (i = 0; i < 5; i++) {
        if (arr[i] == elem) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("%d found at index %d\n", elem, i);
    } else {
        printf("%d not found\n", elem);
    }

    return 0;
}