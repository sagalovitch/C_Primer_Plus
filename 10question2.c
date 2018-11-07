#include <stdio.h>

void copy_arr(double target[], double source[], int size){
    for(int i = 0; i < size; i++){
        target[i] = source[i];
    }
}

void copy_ptr(double *target, double *source, int size){
    for(int i = 0; i < size; i++){
        target[i] = *(source + i);
    }
}

void copy_ptrs(double *target, double *source, double *end){
    for(int i = 0; source < end; i++, source++){
        target[i] = *source;

    }
}


int main(void){


    double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target1[5];
    double target2[5];
    double target3[5];

    copy_arr(target1, source, 5);
    copy_ptr(target2, source, 5);

    copy_ptrs(target3, source, source + 5);

    printf("target1 (copy_arr):\n");
    for(int i = 0; i < 5; i++){
        printf("%.1lf\n", target1[i]);
    }

    printf("target2 (copy_ptr):\n");
    for(int i = 0; i < 5; i++){
        printf("%.1f\n", target2[i]);
    }

    printf("target3 (copy_ptrs): \n");
    for(int i = 0; i < 5; i++){
        printf("%.1f\n", target3[i]);
    }
}
