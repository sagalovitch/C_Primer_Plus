#include <stdio.h>

void copy_arr(double target[], double source[], int size)
{
    for(int i = 2; i < 5; i++){
        target[i - 2] = source[i];
    }
}

int main(void)
{
	double arr[7] = {1,2,3,4,5,6,7};
	double ar[3];
	copy_arr(ar, arr, 7);
	
	for(int i = 0; i < 3; i++){
		printf("%lf ", ar[i]);
	}
}
