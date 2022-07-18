#include <stdio.h>
int main()
{
    int i, j, num, sum = 0, k = 9;
    printf("Input terms of number: ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        for (j = i; j <= i; j++)
        {
            printf("%d", k);
            sum += k;
            k = k * 10 + 9 ;
        }
    printf("\n");
    }
    printf("Sum of the series = %d \n", sum);
    return 0;
}
