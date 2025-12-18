// 03. Search a specific number of an array element and say its position if it is found.

#include <stdio.h>
#include <conio.h>

void inputArray(int arr[], int n) {
    int i;
    for(i=0; i<n; i++){
        printf("Enter number= ");
        scanf("%d", &arr[i]);
    }
}

int searchNumber(int arr[], int n, int number) {
    int i;
    for(i=0; i<n; i++){
        if(arr[i] == number) {
            return i+1;
        }
    }
    return -1;
}

void displayResult(int position) {
    if(position == -1) {
        printf("Number not found\n");
    }
    else {
        printf("Number found at position %d\n", position);
    }
}

int main() {
    int arr[100], n, number, position;

    printf("enter how many numbers u want= ");
    scanf("%d", &n);

    inputArray(arr, n);
    
    printf("\nenter number to search= ");
    scanf("%d", &number);

    position = searchNumber(arr, n, number);
    displayResult(position);
    
    return 0;
}