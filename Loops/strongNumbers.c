// //Write a C program to check whether a number is a Strong Number or not
// #include <stdio.h>
// int factorial(int);
// int main()
// {
//     int num, hold, sum = 0, fact, temp;
//     printf("Input any number : ");
//     scanf("%d", &num);
//     for (hold = num; num != 0; num /= 10)
//     {
//         temp = num % 10;
//         fact = factorial(temp);
//         sum += fact;
//     }
//     if (sum == hold)
//         printf("%d is strong number");
//     else
//         printf("%d is not a strong number");
//     return 0;
// }
// int factorial(int temp)
// {
//     if (temp == 0 || temp == 1)
//         return 1;
//     else
//         return temp * factorial(temp - 1);
// }
#include <stdio.h>
int main()
{
    int num, fact = 1, sum = 0, i, hold;
    printf("Input any number : ");
    scanf("%d", &num);
    for (hold = num; num > 0; num /= 10) //145/10 => 14 14/10 => 1
    {
        fact = 1;
        for (i = 1; i <= num % 10; i++) // 145 % 10 == 5 //14%10 = 4 //1%10 =>1
        {
            fact = fact * i; //first 120,24,1
        }
        sum += fact; //120 +24+1
    }
    if (sum == hold)
        printf("%d is the strong number", hold);
    else
        printf("%d is not the strong number", hold);
    return 0;
}