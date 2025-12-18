// 04. Delete the first element of an array element.

#include <stdio.h>
#include <conio.h>

int main() {
    int arr[100], n, i;

    printf("enter how many numbers u want= ");
    scanf("%d", & n);

    for(i=0; i<n; i++){
        printf("Enter number= ");
        scanf("%d", & arr[i]);
    }

    printf("\noriginal array: ");
    for(i=0; i<n; i++){
        printf("%d, ", arr[i]);
    }

    for(i=0; i<(n-1); i++){
        arr[i] = arr[i+1];
    }
    n--;

    printf("\n\nafter deleting first element: ");
    for(i=0; i<n; i++){
        printf("%d, ", arr[i]);
    }

    return 0;
}