#include <stdio.h>

// recursive function for Fibonacci
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n;

    printf("Please enter a non-negative number: ");
    scanf("%d", &n);

    if (n >= 0) {
        printf("Fibonacci of %d is: %d\n", n, fibonacci(n));
    } else {
        printf("Please enter a non-negative number!!\n");
    }

    return 0;
}
