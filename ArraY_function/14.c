// 14. Insert a new element before a specific element in an array where the
//      specific element will be given through a keyboard.

#include <stdio.h>
#include <conio.h>

void inputArray(int arr[], int n) {
    int i;
    for(i=0; i<n; i++) {
        printf("enter number = ");
        scanf("%d", &arr[i]);
    }
}

int findPosition(int arr[], int n, int specific) {
    int i;
    for(i=0; i<n; i++) {
        if(arr[i] == specific) {
            return i;
        }
    }
    return -1;
}

void insertBeforeElement(int arr[], int n, int pos, int new_num) {
    int i;
    for(i=n; i>pos; i--) {
        arr[i] = arr[i-1];
    }
    arr[pos] = new_num;
}

void displayArray(int arr[], int n) {
    int i;
    for(i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[100], n, new_num, specific, pos;

    printf("enter how many numbers u want= ");
    scanf("%d", &n);

    inputArray(arr, n);

    printf("\nenter new number = ");
    scanf("%d", &new_num);

    printf("enter specific num (before u want to add new num): ");
    scanf("%d", &specific);

    pos = findPosition(arr, n, specific);

    if(pos == -1) {
        printf("specific element not found.\n");
    }
    else {
        insertBeforeElement(arr, n, pos, new_num);
        n++;

        printf("\nnew array:\n");
        displayArray(arr, n);
    }

    return 0;
}