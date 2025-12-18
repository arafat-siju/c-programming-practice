/*08. Calculate the sum of primary and secondary diagonal element of
       a square matrix or square 2D (two dimensional) array.
*/

#include <stdio.h>
#include <conio.h>

int main() {
    int n, i, j, sum_1=0, sum_2=0;
    
    printf("enter the size of square matrix = ");
    scanf("%d", & n);

    int arr[n][n];
    
    for(i=0; i<n; i++){
        for(j=0; j<n; j++) {
            printf("enter number = ");
            scanf("%d", & arr[i][j]);
        }
    }

    for (i = 0; i<n; i++){
        for(j=0; j<n; j++){
            if(i==j){
                sum_1 = sum_1 + arr[i][j];
            }
        }
    }

    for (i=0, j=(n-1); i<n && j>=0; i++, j--) {
        sum_2 = sum_2 + arr[i][j];                   //  if (i + j == n - 1)
    }

    printf("\nsum of primary diagonal = %d", sum_1);
    printf("\nsum of secondary diagonal = %d\n", sum_2);

    return 0;
}