#include <stdio.h>
int main()
{
    int r, sum, temp, num, result;
    int stno, enno;
    printf("Input the starting number: ");
    scanf("%d", &stno);
    printf("Input the ending number : ");
    scanf("%d", &enno);
    printf("Armstrong numbers from %d to %d :  ", stno, enno);
    for (num = stno; num <= enno; num++)
    {
        temp = num;
        sum = 0;
        while (temp!= 0)
        {
            r = temp % 10;
            temp = temp/10;
            sum += (r * r * r);
        }
        if (sum == num)
            printf("%d ", num);
    }
    printf("\n");
    return 0;
}