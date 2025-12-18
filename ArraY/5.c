// 05. Delete a specific number of an array element.

#include <stdio.h>
#include <conio.h>

int main() {
    int n, arr[100], new_arr[100], i, j = 0, del;

    printf("enter how many numbers u want= ");
    scanf("%d", & n);

    for(i = 0; i < n; i++) {
        printf("Enter number = ");
        scanf("%d", & arr[i]);
    }

    printf("\noriginal array: ");
    for(i=0; i<n; i++) {
        printf("%d  ", arr[i]);
    }

    printf("\n\nenter number to delete = ");
    scanf("%d", &del);

    for(i = 0; i < n; i++) {
        if(arr[i] != del) {
            new_arr[j] = arr[i];
            j++;
        }
    }

    printf("\nAfter deleting: ");
    for(i = 0; i < j; i++) {
        printf("%d  ", new_arr[i]);
    }

    return 0;
}
