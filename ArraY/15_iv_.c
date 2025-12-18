// 15. Sort an array in ascending and descending order by using the following method.
//      (iv) Merge sort

#include <stdio.h>
#include <conio.h>
int main() {
    int n, a[100], temp[100];
    printf("enter how many numbers u want= ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    int size, left, mid, right, i, j, k;

    // ---------------- ASCENDING ORDER ----------------
    for (size = 1; size < n; size = size * 2) {
        for (left = 0; left < n - 1; left = left + 2 * size) {
            mid = left + size - 1;

            if (mid >= n - 1)
                break; // no right part left

            right = left + 2 * size - 1;
            if (right >= n)
                right = n - 1;

            i = left;
            j = mid + 1;
            k = left;

            while (i <= mid && j <= right) {
                if (a[i] <= a[j]) {
                    temp[k] = a[i];
                    i++;
                } else {
                    temp[k] = a[j];
                    j++;
                }
                k++;
            }

            // Copy remaining elements
            while (i <= mid) {
                temp[k++] = a[i++];
            }
            while (j <= right) {
                temp[k++] = a[j++];
            }

            // Copy back to main array
            for (int p = left; p <= right; p++) {
                a[p] = temp[p];
            }
        }
    }

    printf("\nAscending order: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    // ---------------- DESCENDING ORDER ----------------
    for (size = 1; size < n; size = size * 2) {
        for (left = 0; left < n - 1; left = left + 2 * size) {
            mid = left + size - 1;

            if (mid >= n - 1)
                break;

            right = left + 2 * size - 1;
            if (right >= n)
                right = n - 1;

            i = left;
            j = mid + 1;
            k = left;

            while (i <= mid && j <= right) {
                if (a[i] >= a[j]) {  // change sign for descending
                    temp[k] = a[i];
                    i++;
                } else {
                    temp[k] = a[j];
                    j++;
                }
                k++;
            }

            while (i <= mid) {
                temp[k++] = a[i++];
            }
            while (j <= right) {
                temp[k++] = a[j++];
            }

            for (int p = left; p <= right; p++) {
                a[p] = temp[p];
            }
        }
    }

    printf("\nDescending order: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}