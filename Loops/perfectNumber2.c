#include <stdio.h>
int main()
{
    int a, b, i, j, sum = 0;
    printf("Input starting range or number: ");
    scanf("%d", &a);
    printf("Input ending range or number: ");
    scanf("%d", &b);
    printf("The perfect number between %d to %d is : ", a, b);
    for (i = a; i <= b; i++)
    {
        for (j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                sum += j;
            }
        }
        if (sum == i)
            printf("%d ", sum);
        sum = 0;
    }
    return 0;
}
