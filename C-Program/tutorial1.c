// write a program to test given number is even or odd
#include <stdio.h>
int main()
{
    int num;
    printf("Enter any number\n");
    scanf("%d", &num);
    if (num % 2 == 0)
        printf("%d is even", num);
    else
        printf("%d is odd ", num);
    return 0;
}