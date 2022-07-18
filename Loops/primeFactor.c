#include <stdio.h>
int main()
{
    int i, num, sum = 0;
    printf("Input the number: ");
    scanf("%d", &num);
    printf("Positive divisor : ");
    for (i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            printf("%d ", i);
            sum += i;
        }
    }
    printf("\n");
    printf("The sum of the divisor is: %d\n", sum);
    if (sum != num)
        printf("So, the number is not perfect.");
    else
        printf("The number is perfect.");
    return 0;
}