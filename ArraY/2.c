// 02. Find the maximum or minimum value of an array element.

#include <stdio.h>
#include <conio.h>

int main() {
    int arr[100], n, i, max, min;

    printf("enter how many numbers u want= ");
    scanf("%d", & n);

    for(i=0; i<n; i++){
        printf("Enter number= ");
        scanf("%d", & arr[i]);
    }

    max = arr[0];
    min = arr[0];

    for(i=1; i<n; i++){
        if(arr[i] > max) {
            max = arr[i];
        }
        if(arr[i] < min) {
            min = arr[i];
        }
    }

    printf("\nmaximum value is= %d\n", max);
    printf("minimum value is= %d\n", min);

    return 0;
}