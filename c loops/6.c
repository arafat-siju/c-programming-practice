//Write a C program to find the number of and sum of all integers greater than 100 and less than 200 that are divisible by 7.

#include <stdio.h>
#include <conio.h>

int main(){
        int i=101, count=0, sum=0;
        
        printf("Numbers greater than 100 and less than 200 that are divisible by 7= \n");
        
        while(i < 200){
            if(i % 7 == 0){
                printf("%d, ", i);
                sum =sum + i;
                count++;
            }
            i++;
        }
        
        printf("\n\nnumber of integers= %d", count);
        printf("\nSum of integers= %d\n", sum);
        
        return 0;
}