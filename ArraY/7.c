// 07. Calculate the sum of border element of a 2D (two dimensional) array.

#include <stdio.h>
#include <conio.h>

int main() {
    int row, col, i, j, sum=0;

    printf("enter how many rows u want= ");
    scanf("%d", & row);
    printf("enter how many columns u want= ");
    scanf("%d", & col);

    int arr[row][col];

    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            printf("enter number= ");
            scanf("%d", &arr[i][j]);
        }
    }

    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            if(i==0 || i==(row-1) || j==0 || j==(col-1)) {
                sum = sum + arr[i][j];
            }
        }
    }
    printf("sum of border elements = %d\n", sum);

    return 0;
}