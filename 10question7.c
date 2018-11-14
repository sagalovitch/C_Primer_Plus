#include <stdio.h>

void reverseArr(int a, int b, double ar[a][b]){
    double copyAr[a][b];
    for(int i = 0; i < a; i++){
        for(int x = 0; x < b; x++)
            copyAr[i][x] = ar[a - i - 1][b - x -1];
    }
    for(int z = 0; z < a; z++){
	    for(int y = 0; y < b; y++)
		    ar[z][y] = copyAr[z][y];
    }
}

int main(void){
    double arr[3][2] = {{1, 2}, {3,4}, {1, 5}};
    reverseArr(3, 2, arr);

    for(int i = 0; i < 3; i++){
	    for(int x = 0; x < 2; x++)
		    printf("%.2lf ", arr[i][x]);
    }
}
