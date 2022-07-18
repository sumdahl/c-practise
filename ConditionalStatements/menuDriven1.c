#include <stdio.h>
int add(int, int);
int multiply(int, int);
int subtract(int, int);
int divide(int, int);
int modulo(int, int);
int main()
{
    int choice, numberOne, numberTwo;
    printf("Enter 1 to add numbers:\n");
    printf("Enter 2 to subtract numbers:\n");
    printf("Enter 3 to multiply numbers:\n");
    printf("Enter 4 to divide numbers:\n");
    printf("Enter 5 to find remainder:\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Addition: %d", add(numberOne, numberTwo));
        break;
    case 2:
        printf("Subtraction: %d", subtract(numberOne, numberTwo));
        break;
    case 3:
        printf("Multiplication: %d", multiply(numberOne, numberTwo));
        break;
    case 4:
        printf("Division: %d", divide(numberOne, numberTwo));
        break;
    case 5:
        printf("Remainder: %d", modulo(numberOne, numberTwo));
        break;
    default:
        printf("Invalid input, please try again");
    }
}
int add(int numberOne, int numberTwo)
{
    printf("Enter any two numbers:\n");
    scanf("%d%d", &numberOne, &numberTwo);
    return numberOne + numberTwo;
}
int subtract(int numberOne, int numberTwo)
{
    printf("Enter any two numbers:\n");
    scanf("%d%d", &numberOne, &numberTwo);
    return numberOne - numberTwo;
}
int multiply(int numberOne, int numberTwo)
{
    printf("Enter any two numbers:\n");
    scanf("%d%d", &numberOne, &numberTwo);
    return numberOne * numberTwo;
}
int divide(int numberOne, int numberTwo)
{
    printf("Enter any two numbers:\n");
    scanf("%d%d", &numberOne, &numberTwo);
    return numberOne / numberTwo;
}
int modulo(int numberOne, int numberTwo)
{
    printf("Enter any two numbers:\n");
    scanf("%d%d", &numberOne, &numberTwo);
    return numberOne % numberTwo;
}