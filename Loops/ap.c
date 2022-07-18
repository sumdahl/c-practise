#include <stdio.h>
int main()
{
    int i, n1, n2, cd, sum = 0;
    printf("Input the starting number of the A.P. series : ");
    scanf("%d", &n1);
    printf("Input the number of items for the A.P. series : ");
    scanf("%d", &n2);
    printf("Input the common difference of A.P.series : ");
    scanf("%d", &cd);
    int num = n1;
    printf("The Sum of the A.P. series are : \n");
    for (i = n1; i <= n2; i++)
    {
        if (num != n1)
        {
            printf(" + ");
        }
        printf("%d", num);
        sum += num;
        num += cd;
    }
    printf("= %d", sum);
    return 0;
}
