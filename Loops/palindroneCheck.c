#include <stdio.h>
int main()
{
    int num, rev_num, hold, sum = 0;
    printf("Input any number : ");
    scanf("%d", &num);
    for (hold = num; num != 0; num /=10)
    {
        rev_num = num % 10;
        sum = sum * 10 + rev_num;
    }
    if (sum = hold)
        printf("%d is the palindrone number", hold);
    else
        printf("%d is not a palindrone number", hold);
    return 0;
}
   // hold = num;
    // while (num > 0)
    // {
    //     rev_num = num % 10;
    //     sum = sum * 10 + rev_num;
    //     num = num / 10;
    // }
    // if (hold == sum)
    //     printf("%d is palindrone number", hold);
    // else
    //     printf("%d is not a palindrone number ", hold);
    // return 0;