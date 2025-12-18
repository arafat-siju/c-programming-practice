// 09. Add two matrixes.

#include <stdio.h>
#include <conio.h>

int main() {
    int a[50][50], b[50][50], sum[50][50];
    int row1, col1, row2, col2, i, j;

    printf("enter how many rows u want= ");
    scanf("%d", & row1);
    printf("enter how many columns u want= ");
    scanf("%d", & col1);

    printf("Enter elements of first matrix:\n");
    for (i = 0; i<row1; i++) {
        for (j = 0; j<col1; j++) {
            printf("enter number= ");
            scanf("%d", & a[i][j]);
        }
    }

    printf("enter how many rows u want= ");
    scanf("%d", & row2);
    printf("enter how many columns u want= ");
    scanf("%d", & col2);

    printf("Enter elements of second matrix:\n");
    for (i = 0; i<row2; i++) {
        for (j = 0; j<col2; j++) {
            printf("enter number= ");
            scanf("%d", & b[i][j]);
        }
    }

    if (row1==row2 && col1==col2) {
        printf("\nSum of the two matrices:\n");
        for (i = 0; i<row1; i++) {
            for (j = 0; j<col1; j++) {
                sum[i][j] = a[i][j] + b[i][j];
                printf("%d ", sum[i][j]);
            }
            printf("\n");
        }
    }
    else {
        printf("\nmatrix addition impossible!!.\n");
    }

    return 0;
}