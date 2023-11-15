#include <stdio.h>

int main() {
    int n, first = 0, second = 1, result;

    printf("Enter the number of terms in the Fibonacci sequence: ");
    scanf("%d", &n);

    printf("Fibonacci Sequence up to %d terms:\n", n);

    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            result = i;
        } else {
            result = first + second;
            first = second;
            second = result;
        }
        printf("%d ", result);
    }

    return 0;
}
