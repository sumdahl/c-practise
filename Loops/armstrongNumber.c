#include <stdio.h>
#include <math.h>
int main()
{
    int num, sum = 0, temp, r;
    printf("Input any number: ");
    scanf("%d", &num);
    for (temp = num; num != 0; num = num / 10) // then here 153/10=>15:true, again here 15/10=>1
    {
        r = num % 10;       // first 153%10, check here 15%10 => 5, last 1 %10
        sum += (r * r * r); // first ma 3,second ma 5, last 1
    }
    if (temp == sum)
        printf("%d is an armstrong number.", temp);
    else
        printf("%d is not an armstrong number.", temp);
    return 0;
}