// 01. Calculate sum and average of an array element.

#include <stdio.h>
#include <conio.h>

void inputArray(int arr[], int n) {
    int i;
    for(i=0; i<n; i++){
        printf("enter number= ");
        scanf("%d", &arr[i]);
    }
}

float calculateSum(int arr[], int n) {
    float sum = 0;
    int i;
    for(i=0; i<n; i++){
        sum = sum + arr[i];
    }
    return sum;
}

float calculateAverage(float sum, int n) {
    return sum/n;
}

void displayResults(float sum, float avg) {
    printf("\nSum = %.2f\n", sum);
    printf("Average = %.2f", avg);
}

int main(){
    int arr[100], n;
    float sum, avg;
    
    printf("enter how many numbers u want= ");
    scanf("%d", &n);

    inputArray(arr, n);
    sum = calculateSum(arr, n);
    avg = calculateAverage(sum, n);
    displayResults(sum, avg);

    return 0;
}