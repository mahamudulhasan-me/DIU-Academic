#include <stdio.h>
#include <math.h>

double func(double x) {
    // Define your function here, for example: x^3 - x - 2
    return x * x * x - x - 1;
}

// False position method function
double falsePosition(double a, double b) {
    double c;
    int maxIterations = 1000;
    double tol= 0.01;

    if (func(a) * func(b) > 0) {
        printf("Invalid value of a & b!\n");
        return 0.0;
    }

    for (int i = 1; i <= maxIterations; ++i) {
        // Calculate the false position
        c = (a * func(b) - b * func(a)) / (func(b) - func(a));

        if (fabs(func(c)) < tol) {
            break;
        }

        if (func(c) * func(a) < 0) {
            b = c;
        } else {
            a = c;
        }
    }

    return c;
}

int main() {
    double a, b, root;

    printf("Enter the initial interval [a, b]: ");
    scanf("%lf %lf", &a, &b);

    root = falsePosition(a, b);

    printf("The root is: %lf\n", root);

    return 0;
}
