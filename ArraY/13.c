//13. Insert a new element in a specific position in an array where the
//     position and new element will be given through the key board.

#include <stdio.h>
#include <conio.h>

int main() {
    int arr[100], n, new_num, pos, i;

    printf("enter how many numbers u want= ");
    scanf("%d", & n);

    for(i = 0; i < n; i++) {
        printf("enter number = ");
        scanf("%d", & arr[i]);
    }
        
    printf("\nEnter new number = ");
    scanf("%d", & new_num);
    printf("Enter position = ");
    scanf("%d", & pos);

    for(i = n; i >= pos; i--) {
        arr[i] = arr[i-1];
    }

    arr[pos] = new_num;
    n++;

    printf("\nnew array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}