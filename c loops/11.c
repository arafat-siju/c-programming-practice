// Write the Fibonacci series up to n Where n will be given through the keyboard.

#include <stdio.h>
#include <conio.h>

int main() {
        int n, a, b, c;

        printf("Enter a number: ");
        scanf("%d", &n);

        a = 0;
        b = 1;

        printf("Fibonacci series up to %d= \n", n);
        while(a <= n){
            printf("%d ", a);
            c = a + b;
            a = b;
            b = c;
        }

        return 0;
}