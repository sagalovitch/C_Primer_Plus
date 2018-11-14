#include <stdio.h>

void arr_sum(int *ar1, int *ar2, int *ar3, int size)
{
	for(int i = 0; i < size; i++){
		*(ar3 + i) = *(ar1 + i) + *(ar2 + i); 
	}
}

int main(void)
{
	int arr1[4] = {2, 4, 5, 8};
	int arr2[4] = {1, 0, 4, 6};
	int arr3[4];
	arr_sum(arr1, arr2, arr3, 4);
	for(int i = 0; i < 4; i++){
		printf("%d\n", arr3[i]);
	}
}
