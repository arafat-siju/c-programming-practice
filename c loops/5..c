//Write a C program to find the number of and sum of all integers greater than 50 and less than 300 that are divisible by 9.

#include <stdio.h>
#include <conio.h>

int main(){
        int i=51, count=0, sum=0;
        
        printf("Numbers greater than 50 and less than 300 that divisible by 9=\n");
        while(i < 300){
            if(i % 9 == 0){
                printf("%d, ", i);
                count++;
                sum = sum + i;
            }
            i++;
        }
        
        printf("\n\nnumber of integers= %d", count);
        printf("\nSum om integers= %d\n", sum);
        
        return 0;
}