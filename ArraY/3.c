// 03. Search a specific number of an array element and say its position if it is found.

#include <stdio.h>
#include <conio.h>

int main() {
    int arr[100], n, i, number, found=0;

    printf("enter how many numbers u want= ");
    scanf("%d", & n);

    for(i=0; i<n; i++){
        printf("Enter number= ");
        scanf("%d", & arr[i]);
    }
    
    printf("\nenter number to search= ");
    scanf("%d", & number);

    for(i=0; i<n; i++){
        if( arr[i] == number ) {
            printf("Number found at position %d\n", i+1);
            found = 1;
            break;
        }
    }

    if(found == 0) {
        printf("Number not found\n");
    }
    
    return 0;
}