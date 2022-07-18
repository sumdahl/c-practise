#include <stdio.h>
#include <math.h>
int main()
{
    int num, i, flag = 0;
    printf("Enter any number : ");
    scanf("%d", &num);
    if (num == 1 || num == 0)
        flag = 1;
        //optimizing code prime numbers can decide by sqrt also
    for (i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf("%d is the prime number ", num);
    else
        printf("%d is a composite number", num);
}