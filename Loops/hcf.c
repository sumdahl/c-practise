#include <stdio.h>
int main()
{
    int fno, sno, i, j, hcf = 1;
    printf("Input first number : ");
    scanf("%d", &fno);
    printf("Input second number : ");
    scanf("%d", &sno);
    j = (fno > sno) ? fno : sno;
    for (i = 1; i <= j; i++)
    {
        if (fno % i == 0 && sno % i == 0)
        {
            hcf = i;
        }
    }
    printf("HCF of %d and %d is : %d", fno, sno, hcf);
    return 0;
}
