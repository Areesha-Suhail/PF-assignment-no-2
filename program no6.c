
#include <stdio.h>

int main() 
{
    int sub1, sub2, sub3;
    double average;
    char grade;

    printf("Enter marks for Subject 1: ");
    scanf("%d", &sub1);
    printf("Enter marks for Subject 2: ");
    scanf("%d", &sub2);
    printf("Enter marks for Subject 3: ");
    scanf("%d", &sub3);
    
    average = (sub1 + sub2 + sub3) / 3.0;

    
    if (average >= 90) {
        grade = 'A';
    } else if (average >= 80) {
        grade = 'B';
    } else if (average >= 70) {
        grade = 'C';
    } else if (average >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    printf("Average marks: %f\n", average);
    printf("Grade: %c\n", grade);

    return 0;
}