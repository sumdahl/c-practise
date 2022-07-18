#include <stdio.h>
int main()
{
    int i, j, rows, k, spc;
    printf("Enter number of row:");
    scanf("%d", &rows);
    spc = rows + 4 - 1;
    for (i = 1; i <= rows; i++)
    {
        for (k = spc; k >= 1; k--)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
        spc--;
    }
    return 0;
}