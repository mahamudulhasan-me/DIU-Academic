#include <stdio.h>
#include <math.h>

double func(double x){
    return 2 * pow(x, 3) - 2 * x - 5;
}

double bisection(double a, double b){
    double c;
    double tol = 0.001;

    if(func(a) * func(b) > 0){
        printf("Invalid value of a and b");
        return 0.0;
    }

    while((b - a) >= tol){
         c = (a + b)/ 2;
         if(fabs(func(c)) < tol){
             break;
         }
         if(func(a) * func(c) < 0){
             b = c;
         } else{
             a = c;
         }
    }
    return c;
}

int main(){
    double a, b, root;

    printf("Enter the value of [a, b]: ");
    scanf("%lf %lf", &a, &b);

    root = bisection(a, b);
    printf("Root is approximately: %lf\n", root);

    return 0;
}
