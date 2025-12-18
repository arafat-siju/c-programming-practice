// 17. Write a program that can merge two sorted arrays into a one sorted array.


#include <stdio.h>
#include <conio.h>

int main() {
    int a[100], b[100], c[200];
    int n1, n2, i, j, k;

    printf("enter how many numbers u want in 1st array = ");
    scanf("%d", & n1);
    for(i = 0; i < n1; i++){
        printf("Enter number = ");
        scanf("%d", & a[i]);
    }

    printf("\nenter how many numbers u want in 2nd array = ");
    scanf("%d", &n2);
    for(i = 0; i < n2; i++){
        printf("Enter number = ");
        scanf("%d", & b[i]);
    }

    i = j = k = 0;
// .......merge two sorted arrays........
    while(i < n1 && j < n2) {
        if(a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }

//........copy remaining elements........
    while(i < n1)
        c[k++] = a[i++];
    while(j < n2)
        c[k++] = b[j++];

    printf("\nMerged sorted array:\n");
    for(i = 0; i < k; i++)
        printf("%d ", c[i]);

    return 0;
}
