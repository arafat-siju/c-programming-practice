// 16. Using Binary search method, search a number from a linear array.


#include <stdio.h>
int main() {
    int n, i, j, temp, key, a[100];
    int low, high, mid, found = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Enter number = ");
        scanf("%d", & a[i]);
    }

    // Sort the array in ascending order (Bubble Sort)
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - 1 - i; j++) {
            if(a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("\nSorted array (ascending order): ");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    printf("Enter number to search: ");
    scanf("%d", &key);

    // Binary search
    low = 0;
    high = n - 1;
    while(low <= high) {
        mid = (low + high) / 2;

        if(a[mid] == key) {
            found = 1;
            break;
        }
        else if(a[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if(found)
        printf("found at position %d.\n", mid + 1);
    else
        printf("not found in the array.\n", key);

    return 0;
}
