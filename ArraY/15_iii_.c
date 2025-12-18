// 15. Sort an array in ascending and descending order by using the following method.
//      (iii) Sequential Sort (Selection Sort)

#include <stdio.h>
#include <conio.h>

int main() {
    int n, arr[100], copy[100], i, j, min_index, temp;
    printf("Enter how many numbers you want = ");
    scanf("%d", &n);
    
    for(i = 0; i < n; i++) {
        printf("Enter number = ");
        scanf("%d", &arr[i]);
        copy[i] = arr[i];
    }

    for(i = 0; i < n - 1; i++) {    // Ascending order
        min_index = i;
        for(j = i + 1; j < n; j++) {
            if(arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }

    printf("\nAscending order: ");
    for(i = 0; i < n; i++) {
        printf("%d  ", arr[i]);
    }

    for(i = 0; i < n - 1; i++) {    // Descending order
        min_index = i;
        for(j = i + 1; j < n; j++) {
            if(copy[j] > copy[min_index]) {
                min_index = j;
            }
        }
        temp = copy[i];
        copy[i] = copy[min_index];
        copy[min_index] = temp;
    }

    printf("\nDescending order: ");
    for(i = 0; i < n; i++) {
        printf("%d  ", copy[i]);
    }
    return 0;
}