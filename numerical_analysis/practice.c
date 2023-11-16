#include <stdio.h>
#include <math.h>

double func(double x){
    return x * x * x - x - 1;
}

double bisection(double a, double b){
   double c;
   double e = 0.001;

   do{
    c = (a - (func(a) * (b- a)) / (func(b) - func(a)));

    a = b;
    b = c;
   }while(fabs(func(c))> e);

   return c;
}

int main(){
    double a = 1, b = 2, root;
     root  = bisection(a, b);
    printf("Root is: %llf", root);

    return 0;

}
