#include <stdio.h>

void reverseArr(int a, int b, double ar[a][b]){
    double copyAr[a][b];
    for(int i = 0; i < a; i++){
        for(int x = 0; x < b; x++){
            copyAr[i][x] = ar[a - i -1][b - x -1];
        }
    }
}

int main(void){
    double arr[3][2] = {{1, 2}, {3,4}, {1, 5}};
    reverseArr(3, 3, arr);
}
