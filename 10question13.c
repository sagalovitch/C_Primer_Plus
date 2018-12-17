#include <stdio.h>

void getArr(int rows, int cols, double arr[rows][cols])
{
    for(int i = 0; i < rows; i++){
        printf("Enter Numbers for Row #%d\n", i + 1);
        for(int x = 0; x < cols; x++){
            scanf("%lf", &arr[i][x]);
        }

    }
}

double avgOne(double arr[][5], int row)
{
    double avg;
    double total = 0;

    for(int i = 0; i < 5; i++){
        total += arr[row][i];
    }

    avg = total / 5;
    return avg;
}

double avgAll(int rows, int cols, double arr[rows][cols])
{
    double total = 0;
    double avg;
    for(int i = 0; i < rows; i++){
        for(int x = 0; x < cols; x++){
            total += arr[i][x];
            
        }
    }
    avg = total / (rows * cols);
    return avg;
}

double largeVal(double arr[][5], int row){
    double great = arr[0][0];

    for(int i = 0; i < row; i++){
        for(int x = 0; x < 5; x++){
            if(arr[i][x] > great)
                great = arr[i][x];
        }
    }
    return great;

}

int main(void)
{
    double arr1[3][5];
    getArr(3, 5, arr1);
    for(int i = 0; i < 3; i++){
        printf("Row #%d ", i + 1);
        printf("%lf\n", avgOne(arr1, i));
    }
    printf("%lf\n", avgAll(3, 5, arr1));
    printf("%lf\n", largeVal(arr1, 3));

}
