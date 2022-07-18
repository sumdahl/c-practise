#include <stdio.h>
int main()
{
    int num, i, result = 1;
    printf("Enter the number :");
    scanf("%d", &num);
    for (i = num; i >= 1; i--)
    {
        result *= i;
    }
    printf("Factorial of %d is: %d", num, result);
    return 0;
}