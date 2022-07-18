// Write a c program to find real roots of ax^2 + bx + c =0
#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, r1, r2, d;
    printf("Enter a,b,c\n");
    scanf("%f%f%f", &a, &b, &c);
    d = b * b - 4 * a * c;
    if (d < 0)
    {
        printf("No real roots");
    }
    else
    {
        d = sqrt(d);
        r1 = (-b + d) / 2 * a;
        r2 = (-b - d) / 2 * a;
        printf("%f is the first root\n", r1);
        printf("%f is the second root\n", r2);
    }
    return 0;
}