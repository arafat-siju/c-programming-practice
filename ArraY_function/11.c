// 11. Replace a specific number of an array element.

#include <stdio.h>
#include <conio.h>

void inputArray(int arr[], int n) {
    int i;
    for(i=0; i<n; i++) {
        printf("enter number = ");
        scanf("%d", &arr[i]);
    }
}

int findPosition(int arr[], int n, int num) {
    int i;
    for(i=0; i<n; i++) {
        if(arr[i] == num) {
            return i;
        }
    }
    return -1;
}

void replaceElement(int arr[], int pos, int new_num) {
    arr[pos] = new_num;
}

void displayArray(int arr[], int n) {
    int i;
    for(i=0; i<n; i++) {
        printf("%d  ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[100], n, num, new_num, pos;

    printf("enter how many numbers u want= ");
    scanf("%d", &n);

    inputArray(arr, n);

    printf("Enter the number you want to replace= ");
    scanf("%d", &num);

    pos = findPosition(arr, n, num);

    if(pos == -1) {
        printf("Number not found!!.\n");
    } 
    else {
        printf("Enter new number = ");
        scanf("%d", &new_num);
        replaceElement(arr, pos, new_num);

        printf("after replacement: ");
        displayArray(arr, n);
    }

    return 0;
}