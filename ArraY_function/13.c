//13. Insert a new element in a specific position in an array where the
//     position and new element will be given through the key board.

#include <stdio.h>
#include <conio.h>

void inputArray(int arr[], int n) {
    int i;
    for(i=0; i<n; i++) {
        printf("enter number = ");
        scanf("%d", &arr[i]);
    }
}

void insertAtPosition(int arr[], int n, int new_num, int pos) {
    int i;
    for(i=n; i>=pos; i--) {
        arr[i] = arr[i-1];
    }
    arr[pos] = new_num;
}

void displayArray(int arr[], int n) {
    int i;
    for(i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int arr[100], n, new_num, pos;

    printf("enter how many numbers u want= ");
    scanf("%d", &n);

    inputArray(arr, n);
        
    printf("\nEnter new number = ");
    scanf("%d", &new_num);
    printf("Enter position = ");
    scanf("%d", &pos);

    insertAtPosition(arr, n, new_num, pos);
    n++;

    printf("\nnew array: ");
    displayArray(arr, n);

    return 0;
}