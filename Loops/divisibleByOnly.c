// Write a program in C to find the number and sum of all integer between 100 and 200 which are divisible by 9
#include <stdio.h>
int main()
{
    int i, j, sum = 0;
    printf("Numbers between 100 and 200, divisible by 9 : ");
    for (i = 100; i <= 200; i++)
    {
        if (i % 9 == 0)
        {
            printf("%d \n", i);
            sum += i;
        }
    }
    printf("Sum : %d", sum);
    return 0;
}