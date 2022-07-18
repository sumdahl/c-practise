#include <stdio.h>
#include <math.h>
int main()
{
    int num, i, cube;
    printf("Enter any number:\n");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        cube = pow(i, 3);
        printf("Number is : %d and cube of the %d is : %d\n", i, i, cube);
    }
    return 0;
}