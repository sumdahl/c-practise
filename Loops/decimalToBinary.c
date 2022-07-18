// write a program to convert decimal number into binary without using an array.
#include <stdio.h>
int main()
{
    int i, num, result, rev_num;
    printf("Input a decimal number : ");
    scanf("%d", &num);
    for (i = num; i != 0; i /= 2)
    {
        result = i % 2;
        printf("%d ", rev_num);
    }
    return 0;
}
