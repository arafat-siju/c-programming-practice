// 12. Insert a new element in the first position of an array.

#include <stdio.h>
#include <conio.h>

void inputArray(int arr[], int n) {
    int i;
    for(i=0; i<n; i++) {
        printf("eneter number = ");
        scanf("%d", &arr[i]);
    }
}

void insertAtFirst(int arr[], int n, int new_num) {
    int i;
    for(i=n; i>=1; i--) {
        arr[i] = arr[i-1];
    }
    arr[0] = new_num;
}

void displayArray(int arr[], int n) {
    int i;
    for(i=0; i<=n; i++) {
        printf("%d  ", arr[i]);
    }
}

int main() {
    int arr[100], n, new_num;

    printf("enter how many numbers u want= ");
    scanf("%d", &n);

    inputArray(arr, n);

    printf("Enter the number u want to add in first position: ");
    scanf("%d", &new_num);

    insertAtFirst(arr, n, new_num);

    printf("\nNew array: ");
    displayArray(arr, n);

    return 0;
}