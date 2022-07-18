// Write a C program to display the n terms of harmonic series and their sum.
#include <stdio.h>
int main()
{
    int i, num;
    float sum = 0;
    printf("Enter the number of terms : ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        printf("1/%d + ", i);
        sum = sum + (float)1/i; //type casting
    }
    printf("\n");
    printf("Sum of the series upto %d terms : %0.2f", num, sum);
    return 0;
}