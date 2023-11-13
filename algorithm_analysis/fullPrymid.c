#include <stdio.h>

int main(){
    
    int i, space, star, rows= 5;
    
    for(i = 1; i<= rows; ++i){
        for(space = 1; space <= rows - i; ++space){
            printf(" ");
        }
        
        for(star = 1; star <= 2 * i -1 ; ++star){
            printf("%d", star % 2);
        }
        printf("\n");
    }
    
    return 0;
}