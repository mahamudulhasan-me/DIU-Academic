#include <stdio.h> 

int factorial(int n){
    if(n == 0 || n == 1){
        return 1;
    } else{
        return n * factorial(n - 1);
    }
}

int main(){
    int n;
    
    printf("Please enter positive number: ");
    scanf("%d", &n);
    
    if(n > 0){
        printf("Factorial of %d is: %d\n", n, factorial(n));
    } else{
        printf("Plese enter positive number!!\n");
    }
    
    return 0;
}