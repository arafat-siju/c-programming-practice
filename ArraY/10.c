// 10. Multiply two matrixes.

#include <stdio.h>
#include <conio.h>

int main() {
    int a[50][50], b[50][50], result[50][50];
    int row1, col1, row2, col2, i, j, k;

    printf("enter how many rows u want for 1st maatrix= ");
    scanf("%d", & row1);
    printf("enter how many columns u want for 1st matrix= ");
    scanf("%d", & col1);

    printf("enter how many rows u want for 2nd matrix= ");
    scanf("%d", & row2);
    printf("enter how many columns u want for 2nd matrix= ");
    scanf("%d", & col2);

    if (col1 != row2) {
        printf("\nmatrix multiplication not possible.\n");
        return 0;
    }

    printf("enter numbers for first matrix:\n");
    for (i = 0; i < row1; i++) {
        for (j = 0; j < col1; j++) {
            printf("enter numbr = ");
            scanf("%d", & a[i][j]);
        }
    }

    printf("\nEnter elements of second matrix:\n");
    for (i = 0; i < row2; i++) {
        for (j = 0; j < col2; j++) {
            printf("enter number = ");
            scanf("%d", & b[i][j]);
        }
    }

    for (i=0; i<row1; i++) {
        for (j=0; j<col2; j++) {
            result[i][j] = 0;
        }
    }

    for (i = 0; i < row1; i++) {
        for (j = 0; j < col2; j++) {
            for (k = 0; k < col1; k++) {
                result[i][j] = result[i][j] + (a[i][k] * b[k][j]);
            }
        }
    }

    printf("Result: \n");
    for(i = 0; i < row1; i++) {
        for (j = 0; j < col2; j++) {
            printf("%d  ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}