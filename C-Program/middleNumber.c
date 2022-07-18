// write a C program to find out real number
/*
logic 4,5,6 5,6,7
if((a<b&&b<c)
*/

#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three numbers\n");
    scanf("%d%d%d", &a, &b, &c);
    if ((a > b && a < c) || (a > c && a < b))
        printf("%d is the middle number\n", a);
    else if ((b > a && b < c) || (b > c && b < a))
        printf("%d is the middle number", b);
    else
        printf("%d is the middle number", c);
    return 0;
}