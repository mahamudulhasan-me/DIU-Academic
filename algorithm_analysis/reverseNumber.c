#include <stdio.h>

int main() {
    int num, reversedNumber = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        remainder = num % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        num /= 10;
    }

    printf("Reversed Number: %d\n", reversedNumber);

    return 0;
}
