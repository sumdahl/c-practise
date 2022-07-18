#include <stdio.h>
int main()
{
    int i, j, fno, sno, hcf = 1, lcm;
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
    lcm = (fno * sno) / hcf;
    printf("The LCM of %d and %d is : %d", fno,sno,lcm);
}