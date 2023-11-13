#include <stdio.h> 

// recursive function
int fibonacci(int n){
   int first = 0, second = 1;
    if(n == 0 || n == 1){
        return 1;
    } else{
       return fibonacci(n-1) + fibonacci(n-2);
    }
}

// normal function
// Function to generate and print Fibonacci series
// void fibonacci(int n) {
//     int first = 0, second = 1, next;

//     printf("Fibonacci Series up to %d terms: ", n);

//     for (int i = 0; i < n; ++i) {
//         printf("%d, ", first);
//         next = first + second;
//         first = second;
//         second = next;
//     }

//     printf("\n");
// }


int main(){
    int n;
    
    printf("Please enter positive number: ");
    scanf("%d", &n);
    
    if(n > 0){
        printf("Factorial of %d is: %d\n", n, fibonacci(n));
    } else{
        printf("Plese enter positive number!!\n");
    }
    
    return 0;
}