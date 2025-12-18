// 09. Add two matrixes.

#include <stdio.h>
#include <conio.h>

void inputMatrix(int arr[][50], int row, int col, char name[]) {
    int i, j;
    printf("Enter elements of %s matrix:\n", name);
    for(i=0; i<row; i++) {
        for(j=0; j<col; j++) {
            printf("enter number= ");
            scanf("%d", &arr[i][j]);
        }
    }
}

void addMatrices(int a[][50], int b[][50], int sum[][50], int row, int col) {
    int i, j;
    for(i=0; i<row; i++) {
        for(j=0; j<col; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
}

void displayMatrix(int arr[][50], int row, int col) {
    int i, j;
    for(i=0; i<row; i++) {
        for(j=0; j<col; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int a[50][50], b[50][50], sum[50][50];
    int row1, col1, row2, col2;

    printf("enter how many rows u want= ");
    scanf("%d", &row1);
    printf("enter how many columns u want= ");
    scanf("%d", &col1);

    inputMatrix(a, row1, col1, "first");

    printf("enter how many rows u want= ");
    scanf("%d", &row2);
    printf("enter how many columns u want= ");
    scanf("%d", &col2);

    inputMatrix(b, row2, col2, "second");

    if(row1==row2 && col1==col2) {
        printf("\nSum of the two matrices:\n");
        addMatrices(a, b, sum, row1, col1);
        displayMatrix(sum, row1, col1);
    }
    else {
        printf("\nmatrix addition impossible!!.\n");
    }

    return 0;
}