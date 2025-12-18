// 18 Write a program that can store and print array of structure which holds three
//  fields like the (i) roll (ii) name (iii) marks. Here data type can be chosen by user.


#include <stdio.h>
int main() {
    int n, i;
    
    printf("How many students? = ");
    scanf("%d", & n);

    struct Student {
        int roll;
        char name[50];
        float marks;
    } 
    students[n]; // array of structures

    for(i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Enter roll: ");
        scanf("%d", &students[i].roll);
        printf("Enter name: ");
        scanf("%s", students[i].name); // no space in name for simplicity
        printf("Enter marks: ");
        scanf("%f", &students[i].marks);
    }

    printf("\nStudent Details:\n");
    for(i = 0; i < n; i++) {
        printf("Roll: %d, Name: %s, Marks: %.2f\n", students[i].roll, students[i].name, students[i].marks);
    }

    return 0;
}
