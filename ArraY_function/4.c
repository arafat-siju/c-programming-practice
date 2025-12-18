// 04. Delete the first element of an array element.

#include <stdio.h>
#include <conio.h>

void inputArray(int arr[], int n) {
    int i;
    for(i=0; i<n; i++){
        printf("Enter number= ");
        scanf("%d", &arr[i]);
    }
}

void displayArray(int arr[], int n) {
    int i;
    for(i=0; i<n; i++){
        printf("%d, ", arr[i]);
    }
}

int delete_First_Element(int arr[], int n) {
    int i;
    for(i=0; i<(n-1); i++){
        arr[i] = arr[i+1];
    }
    return n-1;
}

int main() {
    int arr[100], n;

    printf("enter how many numbers u want= ");
    scanf("%d", &n);

    inputArray(arr, n);

    printf("\noriginal array: ");
    displayArray(arr, n);

    n = delete_First_Element(arr, n);

    printf("\n\nafter deleting first element: ");
    displayArray(arr, n);

    return 0;
}