#include <stdio.h>
int main()
{
    int num, terms, cr, sum = 0, i;
    printf("Input the first number of G.P. series : ");
    scanf("%d", &num);
    printf("Iput the number of terms in the G.P. series : ");
    scanf("%d", &terms);
    printf("Input the common ratio of G.P. series : ");
    scanf("%d", &cr);
    int hold = num; // to avoid + sign after last input
    printf("The number for the G.P. series : \n");
    for (i = 1; i <= terms; i++)
    {
        if (hold != num)
        {
            printf(" + ");
        }
        printf("%d ", num);
        sum += num;
        num *= 2;
    }
    printf("\n");
    printf("The Sum of the G.P. series : %d", sum);
    return 0;
}