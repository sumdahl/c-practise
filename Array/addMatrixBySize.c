#include <stdio.h>
int main()
{
    int i, j, a, b;
    printf("Input the rows : ");
    scanf("%d", &a);
    printf("Input the column: ");
    scanf("%d", &b);
    int m[a][b], n[a][b], sum[a][b];
    // value to elements of first matrix
    printf("Enter the elements of first matrix : \n");
    for (i = 0; i < a; i++)
    { // a = rows;
        for (j = 0; j < b; j++)
        { // b = column;
            scanf("%d", &m[i][j]);
        }
    }

    printf("Enter the elements of second matrix : \n");
    for (i = 0; i < a; i++)
    { // a = rows
        for (j = 0; j < b; j++)
        { // b = columns
            scanf("%d", &n[i][j]);
        }
    }
    //adding two matrices
    printf("The sum of two matrices is : \n");
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            sum[i][j] = m[i][j] + n[i][j];
        }
    }
    //display the added matrix
    printf("After addtion of %dx%d matrix : \n", a, b);
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
