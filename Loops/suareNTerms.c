#include <stdio.h>
int main()
{
    int i, num, sum = 0;
    printf("Input the terms : ");
    scanf("%d", &num);
    printf("The square of natural upto %d terms are : \n", num);
    for (i = 1; i <= num; i++)
    {
        printf("%d ", i * i);
        sum += i * i;
    }
    printf("\n");
    printf("The sum of sqare natural number upto %d terms = %d", num, sum);
    return 0;
}