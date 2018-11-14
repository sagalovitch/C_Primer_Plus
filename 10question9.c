#include <stdio.h>

double copy_mult(int n, int m, double ar[n][m])	
{
	int r, c;
	double copyAr[n][m];
	for(r = 0; r < n; r++){
		for(c = 0; c < m; c++){
			copyAr[r][c] = ar[r][c];
		}
	}
	
	for(int r1 = 0; r1 < n; r1++){
		for(int c1 = 0; c1 < m; c1++){
			printf("%lf\n", copyAr[r1][c1]);
		}
	}
}

int main(void)
{
	int n1 = 3, n2 = 5;
	double ar[n1][n2];
	for(int i = 0; i < n1; i++){
		for(int x = 0; x < n2; x++)
			ar[i][x] = x + i;
	}
	copy_mult(n1, n2, ar);
	

}
