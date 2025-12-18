// 06. Find the sum and average of a 2D (two dimensional) array element(matrix).

#include <stdio.h>
#include <conio.h>

int main() {
    int row, col, i, j;
    float avg, sum=0;

    printf("enter how many rows u want=  ");
    scanf("%d", & row);
    printf("enter how many coloumns u want= ");
    scanf("%d", & col);

    int arr[row][col];

    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            printf("Enter number= ");
            scanf("%d", & arr[i][j]);
            sum =sum + arr[i][j];
        }
    }

    avg = sum / (row*col);

    printf("\nSum of all elements = %.2f\n", sum);
    printf("Average of elements = %.2f\n", avg);

    return 0;
}