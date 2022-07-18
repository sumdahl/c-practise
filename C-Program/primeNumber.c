#include <stdio.h>
int main()
{
    int n, i, m, flag = 0;
    printf("Enter any positive number\n");
    scanf("%d", &n);
    m = n / 2;
    for (i = 2;i <= m; i++)
    {
        if (n % i == 0)
        {
            printf("Number is not prime\n");
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("Number is prime number");
    }
    return 0;
}