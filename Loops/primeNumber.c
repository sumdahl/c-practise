#include <stdio.h>
int main()
{
    int num, i = 1, count = 0;
    printf("Enter any number:\n");
    scanf("%d", &num);
    while (i <= num && count <= 2)
    {
        if (num % i == 0)
        {
            count += 1;
        }
        i += 1;
    }
    if (count == 2)
        printf("%d is the prime number\n");
    else
        printf("%d is the composite number\n");
    return 0;
}