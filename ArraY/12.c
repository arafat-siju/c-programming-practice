// 12. Insert a new element in the first position of an array.

#include <stdio.h>
#include <conio.h>

int main() {
    int arr[100], n, i, new_num;

    printf("enter how many numbers u want= ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("eneter number = ");
        scanf("%d", &arr[i]);
    }

    printf("Enter the number u want to add in first position: ");
    scanf("%d", & new_num);

    for (i=n; i>=1; i--) {
        arr[i] = arr[i-1];
    }

    arr[0] = new_num;

    printf("\nNew array: ");
    for (i = 0; i <= n; i++) {
        printf("%d  ", arr[i]);
    }
    return 0;
}
