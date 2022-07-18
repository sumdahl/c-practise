#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c, d, r1, r2;
    printf("Enter the values of a, b, c\n");
    scanf("%d%d%d", &a, &b, &c);
    d = pow(b, 2) - 4 * a * c;
    if (d < 0)
        printf("Imaginary roots; No soultion\n");
    else
    {
        d = sqrt(d);
        r1 = (-b + d) / 2 * a;
        r2 = (-b - d) / 2 * a;
        printf("First root is :", r1);
        printf("Second root is :", r2);
    }
    return 0;
}