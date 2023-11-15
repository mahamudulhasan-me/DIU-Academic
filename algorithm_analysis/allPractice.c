#include <stdio.h>

int main(){
    int arr[] = {10, 8, 4, 9, 12, 7, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i=0; i<n - 1; i++){
        int minIndex = i;
        for(int j = i + 1; j< n; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }

    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
