#include <stdio.h>
int main()
{
    int i, j, rows, k = 1 ;
    printf("Enter number of rows : ");
    scanf("%d", &rows);
    for (i = 0; i < rows; i++)
    {
        for (j = 1; j <= rows - i; j++)
        {
            printf("  ");
        }
        for (j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
            {
                printf("%4d", k);
            }
            else
            {
                k = k * (i - j + 1) / j;
                printf("%4d", k);
            }
        }
        printf("\n");
    }
}
