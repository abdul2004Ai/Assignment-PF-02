#include <stdio.h>

int main() {
    float science, math, english, average;
    char grade;

    printf("Enter marks in science: ");
    scanf("%f", &science);

    printf("Enter marks in math: ");
    scanf("%f", &math);

    printf("Enter marks in english: ");
    scanf("%f", &english);


    average = (science + math + english)/3;

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