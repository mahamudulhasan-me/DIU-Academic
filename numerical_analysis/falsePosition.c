#include <stdio.h>
#include <math.h>

// The function for which we want to find the root
double func(double x) {
    // Define your function here, for example: x^3 - x - 2
    return x * x * x - x - 1;
}

// False position method function   
double falsePosition(double a, double b) {
    double c;
    int maxIterations = 1000;
    double tol= 0.01;
    
    // Check if the given interval is valid
    if (func(a) * func(b) > 0) {
        printf("Invalid interval. The function has the same sign at both endpoints.\n");
        return 0.0;
    }

    // False position loop
    for (int i = 1; i <= maxIterations; ++i) {
        // Calculate the false position
        c = (a * func(b) - b * func(a)) / (func(b) - func(a));

        // Check if the root is found
        if (fabs(func(c)) < tol) {
            break;
        }

        // Update the interval based on the sign of the function at the false position
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

    // Input the initial interval [a, b] and tolerance
    printf("Enter the initial interval [a, b]: ");
    scanf("%lf %lf", &a, &b);


    // Call the false position method
    root = falsePosition(a, b);

    // Display the result
    printf("The root is: %lf\n", root);

    return 0;
}
