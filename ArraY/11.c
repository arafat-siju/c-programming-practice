// 11. Replace a specific number of an array element.

#include <stdio.h>
#include <conio.h>

int main() {
    int arr[100], n, i, num, new_num, pos = -1;

    printf("enter how many numbers u want= ");
    scanf("%d", & n);

    for(i = 0; i < n; i++) {
        printf("enter number = ");
        scanf("%d", & arr[i]);
    }

    printf("Enter the number you want to replace= ");
    scanf("%d", & num);

    for(i = 0; i < n; i++) {
        if(arr[i] == num) {
            pos = i;
            break;    
        }
    }

    if(pos == -1) {
        printf("Number not found!!.\n");
    } 
    else {
        printf("Enter new number = ");
        scanf("%d", & new_num);
        arr[pos] = new_num;

        printf("after replacement: ");
        for(i = 0; i < n; i++) {
            printf("%d  ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
