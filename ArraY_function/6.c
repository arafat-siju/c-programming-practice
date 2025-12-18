// 06. Find the sum and average of a 2D (two dimensional) array element(matrix).

#include <stdio.h>
#include <conio.h>

void inputMatrix(int arr[][100], int row, int col) {
    int i, j;
    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            printf("Enter number= ");
            scanf("%d", &arr[i][j]);
        }
    }
}

float calculateSum(int arr[][100], int row, int col) {
    float sum = 0;
    int i, j;
    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            sum = sum + arr[i][j];
        }
    }
    return sum;
}

float calculateAverage(float sum, int row, int col) {
    return sum / (row * col);
}

void displayResults(float sum, float avg) {
    printf("\nSum of all elements = %.2f\n", sum);
    printf("Average of elements = %.2f\n", avg);
}

int main() {
    int row, col, arr[100][100];
    float avg, sum;

    printf("enter how many rows u want=  ");
    scanf("%d", &row);
    printf("enter how many coloumns u want= ");
    scanf("%d", &col);

    inputMatrix(arr, row, col);
    sum = calculateSum(arr, row, col);
    avg = calculateAverage(sum, row, col);
    displayResults(sum, avg);

    return 0;
}