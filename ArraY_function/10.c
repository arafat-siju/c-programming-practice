// 10. Multiply two matrixes.

#include <stdio.h>
#include <conio.h>

void inputMatrix(int arr[][50], int row, int col, char name[]) {
    int i, j;
    printf("enter numbers for %s matrix:\n", name);
    for(i=0; i<row; i++) {
        for(j=0; j<col; j++) {
            printf("enter numbr = ");
            scanf("%d", &arr[i][j]);
        }
    }
}

void initializeMatrix(int arr[][50], int row, int col) {
    int i, j;
    for(i=0; i<row; i++) {
        for(j=0; j<col; j++) {
            arr[i][j] = 0;
        }
    }
}

void multiplyMatrices(int a[][50], int b[][50], int result[][50], int row1, int col1, int col2) {
    int i, j, k;
    for(i=0; i<row1; i++) {
        for(j=0; j<col2; j++) {
            for(k=0; k<col1; k++) {
                result[i][j] = result[i][j] + (a[i][k] * b[k][j]);
            }
        }
    }
}

void displayMatrix(int arr[][50], int row, int col) {
    int i, j;
    for(i=0; i<row; i++) {
        for(j=0; j<col; j++) {
            printf("%d  ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int a[50][50], b[50][50], result[50][50];
    int row1, col1, row2, col2;

    printf("enter how many rows u want for 1st maatrix= ");
    scanf("%d", &row1);
    printf("enter how many columns u want for 1st matrix= ");
    scanf("%d", &col1);

    printf("enter how many rows u want for 2nd matrix= ");
    scanf("%d", &row2);
    printf("enter how many columns u want for 2nd matrix= ");
    scanf("%d", &col2);

    if(col1 != row2) {
        printf("\nmatrix multiplication not possible.\n");
        return 0;
    }

    inputMatrix(a, row1, col1, "first");
    inputMatrix(b, row2, col2, "second");
    initializeMatrix(result, row1, col2);
    multiplyMatrices(a, b, result, row1, col1, col2);

    printf("Result: \n");
    displayMatrix(result, row1, col2);

    return 0;
}