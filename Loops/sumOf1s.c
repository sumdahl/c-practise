// Write a program in C to find the sum of the series 1 + 11 + 111 + 1111 +..n terms
#include <stdio.h>
int main()
{
    int i, num;
    long int sum = 0;
    long int out = 1;
    printf("Input the terms : ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        printf("%ld  ", out);
        if (i < num)
            printf("+ ");
        sum += out;
        out = (out * 10) + 1;
    }
    printf("\n");
    printf("%ld", sum);
    return 0;
}