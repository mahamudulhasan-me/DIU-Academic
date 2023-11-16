#include <stdio.h>
#include <math.h>

double func(double x) {
    return x * x * x - x - 1; //
}

double secantMethod(double x0, double x1) {
    double x2, f0, f1;
    double e = 0.0001;

    do {
        f0 = func(x0);
        f1 = func(x1);

        x2 = x1 - (f1 * (x1 - x0)) / (f1 - f0);


        x0 = x1;
        x1 = x2;

    } while (fabs(func(x2)) > e);

    return x2;
}

int main() {
    double x0, x1;

    printf("Enter the initial guesses x0 and x1: ");
    scanf("%lf %lf", &x0, &x1);

    double root = secantMethod(x0, x1);

    printf("Approximate root: %lf\n", root);

    return 0;
}
