#include <stdio.h>
int main()
{
    int num1, num2, lcm, i, max;
    printf("Input first number : ");
    scanf("%d", &num1);
    printf("Input secomd number : ");
    scanf("%d", &num2);
    max = (num1 > num2) ? num1 : num2;
    for (i = max;; i += max) //i = i + max
    {
        if (i % num1 == 0 && i % num2 == 0)
        {
            lcm = i;
            break;
        }
    }
    printf("LCM of %d and %d = %d\n", num1, num2, lcm);
    return 0;
}