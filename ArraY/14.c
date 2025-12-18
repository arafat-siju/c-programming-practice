// 14. Insert a new element before a specific element in an array where the
//      specific element will be given through a keyboard.

#include <stdio.h>
#include <conio.h>

int main() {
    int arr[100], n, i, new_num, specific, pos = -1;

    printf("enter how many numbers u want= ");
    scanf("%d", & n);

    for(i = 0; i < n; i++) {
        printf("enter number = ");
        scanf("%d", & arr[i]);
    }

    printf("\nenter new number = ");
    scanf("%d", & new_num);

    printf("enter specific num (before u want to add new num): ");
    scanf("%d", & specific);

    for(i = 0; i < n; i++) {
        if(arr[i] == specific) {
            pos = i;
            break;
        }
    }
    if(pos == -1) {
        printf("specific element not found.\n");
    }
    else {
        for(i = n; i > pos; i--) {
            arr[i] = arr[i-1];
        }
        arr[pos] = new_num;
        n++;

        printf("\nnew array:\n");
        for(i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    return 0;
}