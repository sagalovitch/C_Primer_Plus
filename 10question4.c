#include <stdio.h>
#define SIZE 7
int larg_index(double *arr, int size){
    double val = 0;
    int index = 0;
    for(int i = 0; i < size; i++){
        if(*(arr+i) > val){
            index = i;
        }
    }
    return index;
}

int main(void){
    double arr[] = {1.6, 5.3, 5.6, 2.4, 4.5, 6.6, 31.1};
    printf("%d", larg_index(arr, SIZE));
}
