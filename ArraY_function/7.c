// 07. Calculate the sum of border element of a 2D (two dimensional) array.

#include <stdio.h>
#include <conio.h>

void inputMatrix(int arr[][100], int row, int col) {
    int i, j;
    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            printf("enter number= ");
            scanf("%d", &arr[i][j]);
        }
    }
}

int calculateBorderSum(int arr[][100], int row, int col) {
    int sum = 0;
    int i, j;
    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            if(i==0 || i==(row-1) || j==0 || j==(col-1)) {
                sum = sum + arr[i][j];
            }
        }
    }
    return sum;
}

void displayResult(int sum) {
    printf("sum of border elements = %d\n", sum);
}

int main() {
    int row, col, arr[100][100], sum;

    printf("enter how many rows u want= ");
    scanf("%d", &row);
    printf("enter how many columns u want= ");
    scanf("%d", &col);

    inputMatrix(arr, row, col);
    sum = calculateBorderSum(arr, row, col);
    displayResult(sum);

    return 0;
}