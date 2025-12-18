/*  Write a program that can say the name of weekdays by receiving 1 to 7.
    Using Switch Statement.
*/

#include <stdio.h>
#include <conio.h>

int main() {
        int a;

        printf("Enter a number (1-7)= ");
        scanf("%d", &a);

        switch(a) {
                case 1:  printf("It is Sunday\n");
                        break;
                case 2:  printf("It is Monday\n");
                        break;
                case 3:  printf("It is Tuesday\n");
                        break;
                case 4:  printf("It is Wednesday\n");
                        break;
                case 5:  printf("It is Thursday\n");
                        break;
                case 6:  printf("It is Friday\n");
                        break;
                case 7:  printf("It is Saturday\n");
                        break;
                default: printf("Invalid input !! Please enter a number from 1 to 7.\n");
        }

        return 0;
}