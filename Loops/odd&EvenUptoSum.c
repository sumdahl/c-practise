#include <stdio.h>
int main()
{
    int i, num, sum = 0, sum1 = 0;
    printf("Enter number upto terms;\n");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        printf(" Odd Numbers : %d\n", i * 2 - 1);
        sum1 += i * 2 - 1;
        printf(" Even Numbers : %d\n", i * 2);
        sum += i * 2;
        
    }
    printf("Sum of even numbers upto %d is %d : ", num, sum);
    printf("Sum of odd numbers upto %d is %d : ", num, sum1);
    return 0;
}