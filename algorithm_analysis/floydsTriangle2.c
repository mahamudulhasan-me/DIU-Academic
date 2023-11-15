#include <stdio.h>

int main() {
    int rows;

    printf("Enter the number of rows for Floyd's Triangle: ");
    scanf("%d", &rows);

    printf("Floyd's Triangle:\n");
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            int k = (i + j) % 2;
            printf("%d ", k);
        }
        printf("\n");
    }

    return 0;
}

