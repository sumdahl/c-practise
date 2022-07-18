#include <stdio.h>
int main()
{
    int i, j, k, num;
    char alph = 'A';
    printf("Input the number of letters (less than 26)  : ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        for (j = 1; j <= num - i; j++)
        {
            printf("  ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%c ", 'A');
        }
        for (k = j - 2; k >= 1; k--)
        {
            printf("A ");
        }
        printf("\n");
    }
    return 0;
}