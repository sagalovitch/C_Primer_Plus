#include <stdio.h>

int larg_arr(int *arr, int size){
    int val = 0;
    for(int i = 0; i < size; i++){
        if(*(arr+i) > val){
            val = *(arr+i);
        }
    }
    return val;
}

int main(void){
    //NOTE a variable sized array cannot be initialized
    int size = 20;
    int arr[] = {4, 12, 1, 17, 13, 9, 20, 5, 18, 6, 3, 16, 10, 15, 19, 14, 8, 2, 7, 11};
    printf("%d", larg_arr(arr, size));
}
