// 15. Sort an array in ascending and descending order by using the following method.
//       (ii)usning Linear sort

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
    
    for(i = 0; i < (n-1); i++) {     // Ascending
        for(j = (i+1); j < n; j++) {
            if(arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("\nascending order: ");
    for(i = 0; i < n; i++){
        printf("%d  ", arr[i]);
    }
    
    for(i = 0; i < (n-1); i++) {       // Descending
        for(j = (i+1); j < n; j++) {
            if(arr[i] < arr[j]) {
                temp = arr[i]; 
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("\ndescending order: ");
    for(i = 0; i < n; i++){
        printf("%d  ", arr[i]);
    }
    return 0;
}