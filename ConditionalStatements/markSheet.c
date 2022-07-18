#include <stdio.h>
#define MAX_LIMIT 20
int main()
{
    char name[MAX_LIMIT];
    int rollNo, mark1, mark2, mark3, totalMarks;
    float percentage;
    printf("Enter the roll no:\n");
    scanf("%d", &rollNo);
    printf("Enter the name of student:\n");
    fgets(name, MAX_LIMIT, stdin);
    printf("Enter marks of Physics, Chemistry and Computer Application\n");
    scanf("%d%d%d", &mark1, &mark2, &mark3);
    totalMarks = mark1 + mark2 + mark3;
    percentage = (totalMarks / 300) * 100;
    printf("Roll No: %d\n", rollNo);
    printf("Name of Student:%s\n", name);
    printf("Marks in Physics: %d\n", mark1);
    printf("Marks in Chemistry: %d\n", mark2);
    printf("Marks in Computer Application: %d\n", mark3);
    printf("Total Marks: %d\n", totalMarks);
    printf("Percentage: %0.2f\n", percentage);
    if (percentage >= 80 && percentage <= 100)
        printf("Division: Distinction\n");
    else if (percentage <= 79 && percentage >= 60)
        printf("Division: First Division\n");
    else if (percentage <= 59 && percentage >= 50)
        printf("Division: Third Division\n");
    else if (percentage <= 49 && percentage <= 40)
        printf("Division: Pass");
    else
        printf("Division: Fail");
    return 0;
}