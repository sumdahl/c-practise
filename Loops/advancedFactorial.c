// Write a program in C to find the sum of the series [ 1-X^2/2!+X^4/4!- .........].
#include <stdio.h>

int main()
{
    int i, num;
    float x, d, t = 1, sum = 1;
    printf("INput the value of x: ");
    scanf("%f", &x);
    printf("Input the number of terms: ");
    scanf("%d", &num);
    for (i = 1; i < num; i++)
    {
        d = (2 * i) * (2 * i - 1);
        t = (-t * x * x) / d;
        sum += t;
    }
    printf("The sum is %0.2f : \nNumber of terms : %d \nValue of x : %0.2f", sum, num, x);
    return 0;
}