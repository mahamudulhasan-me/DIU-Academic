#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Factorials of numbers from 1 to %d:\n", n);
    for (int i = 1; i <= n; i++) {
        long long result = 1;

        for (int j = 1; j <= i; j++) {
            result *= j;
        }

        printf("%d! = %lld\n", i, result);
    }

    return 0;
}
