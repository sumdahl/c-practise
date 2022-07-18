#include <stdio.h>
int main()
{
    int i, j, rows, t = 1, k, spc;
    printf("Enter number of rows:");
    scanf("%d", &rows);
    spc = rows + 4 - 1;
    for (i = 1; i <= rows; i++)
    {   
        //this loop is required for 7 spacing to create like pyramid
        for (k = spc; k >= 1; k--)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%2d", t++);
        }
        printf("\n");
        spc--; //this condition decrease 1 space after 1 iteration of all loops
    }
    return 0;
}