#include <stdio.h>
int main()
{
    int rows, i, j, k;
    printf("Input number of rows : ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= rows - i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        for (k = j - 2; k >= 1; k--)
        {
            printf("%d", k);
        }
        printf("\n");
    }
    return 0;
}