// 02. Find the maximum or minimum value of an array element.

#include <stdio.h>
#include <conio.h>

void inputArray(int arr[], int n) {
    int i;
    for(i=0; i<n; i++){
        printf("Enter number= ");
        scanf("%d", &arr[i]);
    }
}

int findMax(int arr[], int n) {
    int max = arr[0];
    int i;
    for(i=1; i<n; i++){
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int findMin(int arr[], int n) {
    int min = arr[0];
    int i;
    for(i=1; i<n; i++){
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

void displayResults(int max, int min) {
    printf("\nmaximum value is= %d\n", max);
    printf("minimum value is= %d\n", min);
}

int main() {
    int arr[100], n, max, min;

    printf("enter how many numbers u want= ");
    scanf("%d", &n);

    inputArray(arr, n);
    max = findMax(arr, n);
    min = findMin(arr, n);
    displayResults(max, min);

    return 0;
}