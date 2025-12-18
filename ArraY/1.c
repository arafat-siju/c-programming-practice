// 01. Calculate sum and average of an array element.

#include <stdio.h>
#include <conio.h>

int main(){

    int arr[100], n, i;
    float sum=0, avg;
    printf("enter how many numbers u want= ");
    scanf("%d", & n);

    for(i=0; i<n; i++){
        printf("enter number= ");
        scanf("%d", & arr[i]);

        sum = sum + arr[i];
    }

    avg = sum/n;

    printf("\nSum = %.2f\n", sum);
    printf("Average = %.2f", avg);

    return 0;
}