//program to printf diamond
#include <stdio.h>
int main()
{
    int i, j, k, l =  7;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5 - i; j++)
        {
            printf(" ");
        }
        for (j = 0; j <= i; j++)
        {
            printf("*");
        }
        for (k = j - 1; k >= 1; k--)
        {
            printf("*");
        }
        printf("\n");
    }
    for (i = 1; i < 5; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= l; j++)
        {
            printf("*");
        }
        printf("\n");
        l-= 2;
    }
    return 0;
}
