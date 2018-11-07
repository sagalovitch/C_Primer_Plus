#include <stdio.h>

double ar_diff(double *ar, int size){
    double large = 0;
    double small = *ar;
    double diff;

    for(int i = 0; i < size; i++) {
        if(*(ar+i) > large)
            large = *(ar + i);
        if(*(ar+i) < small)
            small = *(ar+i);
    }

    diff = large - small;
    return diff;
}

int main(void){
    double arr[] = {1.5, 1.7, 2.7, 0.5};
    printf("%.3lf", ar_diff(arr, 4));
}
