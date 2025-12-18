// 05. Delete a specific number of an array element.

#include <stdio.h>
#include <conio.h>

void inputArray(int arr[], int n) {
    int i;
    for(i = 0; i < n; i++) {
        printf("Enter number = ");
        scanf("%d", &arr[i]);
    }
}

void displayArray(int arr[], int n) {
    int i;
    for(i=0; i<n; i++) {
        printf("%d  ", arr[i]);
    }
}

int deleteNumber(int arr[], int new_arr[], int n, int del) {
    int i, j = 0;
    for(i = 0; i < n; i++) {
        if(arr[i] != del) {
            new_arr[j] = arr[i];
            j++;
        }
    }
    return j;
}

int main() {
    int n, arr[100], new_arr[100], del, new_size;

    printf("enter how many numbers u want= ");
    scanf("%d", &n);

    inputArray(arr, n);

    printf("\noriginal array: ");
    displayArray(arr, n);

    printf("\n\nenter number to delete = ");
    scanf("%d", &del);

    new_size = deleteNumber(arr, new_arr, n, del);

    printf("\nAfter deleting: ");
    displayArray(new_arr, new_size);

    return 0;
}