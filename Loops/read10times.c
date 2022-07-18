#include <stdio.h>
int main()
{
    int i, num, sum = 0;
    float average;
    for (i = 0; i <= 10; i++)
    {
        printf("Enter any number\n");
        scanf("%d", &num);
        sum += num;
        average = sum / 10;
    }
    printf("Sum : %d\n", sum);
    printf("Average : %0.2f", average);
    return 0;
}