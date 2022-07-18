#include <stdio.h>
int main()
{
    float a, b, c;
    printf("Enter three sides of triangle\n");
    scanf("%f%f%f", &a, &b, &c);
    if (a + b < c || b + c < a || c + a < b)
        printf("Triangle is not valid\n");
    else if (a == b && b == c)
        printf("It is an equilateral trinagle\n");
    else if (a == b || b == a || c == a)
        printf("It is an isosceles triangle\n");
    else
        printf("It is a scalene triangle");
    return 0;
}