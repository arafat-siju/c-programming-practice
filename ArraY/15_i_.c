// 15. Sort an array in ascending and descending order by using the following method. 
//     (i) Using bubble sort.

#include <stdio.h>
#include <conio.h>

int main() {
    int n, arr[100], i, j, temp;
    printf("enter how many numbers u want = ");
    scanf("%d", & n);
    
    for(i = 0; i < n; i++){
        printf("enter number = ");
        scanf("%d", & arr[i]);
    }

    for(i = 0; i < (n-1); i++) {        // Ascending order
        for(j = 0; j < (n-1-i); j++) {
            if(arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("\nascending order: ");
    for(i = 0; i < n; i++){
        printf("%d  ", arr[i]);
    }
    
    for(i = 0; i < (n-1); i++) {       // Descending order
        for(j = 0; j < (n-1-i); j++) {
            if(arr[j] < arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("\ndescending order: ");
    for(i = 0; i < n; i++) {
        printf("%d  ", arr[i]);
    }
    return 0;
}