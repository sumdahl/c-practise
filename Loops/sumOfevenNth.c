#include <stdio.h>
int main()
{
    int num, i, sum = 0;
    printf("Enter upto terms:");
    scanf("%d", &num);
    printf("Even numbers upto %d terms : \n", num);
    for (i = 1; i <= num; i++)
    {
        printf("%d\n", i * 2);
        sum += i * 2;
    }
    printf("Sum of even numbers up to %d terms is : %d", num, sum);
    return 0;
}