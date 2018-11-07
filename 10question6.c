#include <stdio.h>

void reverseArr(double ar[], int size){
    double copyAr[size];
    for(int i = 0; i < size; i++){
        copyAr[i] = ar[size - i - 1];
        // printf("%lf\n", copyAr[i]);
    }
    for(int x = 0; x < size; x++)
        ar[x] = copyAr[x];
}

int main(void){
    double arr[3] = {1, 2, 3};
    reverseArr(arr, 3);
    for(int i = 0; i < 3; i++)
        printf("%.1lf\n", arr[i]);
}
