/*08. Calculate the sum of primary and secondary diagonal element of
       a square matrix or square 2D (two dimensional) array.
*/

#include <stdio.h>
#include <conio.h>

void inputMatrix(int arr[][100], int n) {
    int i, j;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++) {
            printf("enter number = ");
            scanf("%d", &arr[i][j]);
        }
    }
}

int calculatePrimaryDiagonalSum(int arr[][100], int n) {
    int sum = 0;
    int i, j;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(i==j){
                sum = sum + arr[i][j];
            }
        }
    }
    return sum;
}

int calculateSecondaryDiagonalSum(int arr[][100], int n) {
    int sum = 0;
    int i, j;
    for(i=0, j=(n-1); i<n && j>=0; i++, j--) {
        sum = sum + arr[i][j];
    }
    return sum;
}

void displayResults(int sum1, int sum2) {
    printf("\nsum of primary diagonal = %d", sum1);
    printf("\nsum of secondary diagonal = %d\n", sum2);
}

int main() {
    int n, arr[100][100], sum_1, sum_2;
    
    printf("enter the size of square matrix = ");
    scanf("%d", &n);

    inputMatrix(arr, n);
    sum_1 = calculatePrimaryDiagonalSum(arr, n);
    sum_2 = calculateSecondaryDiagonalSum(arr, n);
    displayResults(sum_1, sum_2);

    return 0;
}