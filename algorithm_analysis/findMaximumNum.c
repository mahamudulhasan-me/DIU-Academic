#include <stdio.h>

int main(){
   int i, n= 5;
   int maxNum, allNum[]={2,5,3,9,7};
   maxNum = allNum[0];

   for(i=1; i<5; ++i){
        if(allNum[i] > maxNum){
            maxNum = allNum[i];
        }
   }
   printf("The maximum number is: %d\n", maxNum);

   return 0;
}
