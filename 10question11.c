#include <stdio.h>

void doubleArr(int ar[][5], int row)
{
	for(int i = 0; i < row; i++){
		for(int x = 0; x < 5; x++){
			ar[i][x] *= 2;
		}
	}
}

void printArr(int ar[][5], int row)
{
	for(int i = 0; i < row; i++){
		printf("---\n");
		for(int x = 0; x < 5; x++)
			printf("%d\n", ar[i][x]);
	}
}
int main(void)
{
	int arr[3][5] = {
		{0, 1, 2, 3, 4},
		{2, 3, 4, 5, 6},
		{1, 2, 3, 4, 5}
	};
	doubleArr(arr, 3);
	printArr(arr, 3);
}
