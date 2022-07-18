// #include <stdio.h>

// int main()
// {
//     int i, num, sum = 0, sum1 = 0;
//     while (1)
//     {
//         printf("Enter number upto terms;\n");
//         scanf("%d", &num);
//         for (i = 1; i <= num; i++)
//         {
//             sum1 += i * 2 - 1;
//             printf(" Odd Numbers : %d\t\n", i * 2 - 1);
//             if(num!=1){
//             sum += i * 2;

//             printf(" Even Numbers : %d\t\n", i * 2);
//             }
//         }

//         printf("Sum of odd numbers upto %d is %d : \n", num, sum1);
//         printf("Sum of even numbers upto %d is %d : \n", num, sum);
//         if (num == 0)
//         {
//             printf("You clicked zero, you are quitting!");
//             break;
//         }
//     }
//     return 0;
// }

#include <stdio.h>
int main()
{
    int num, oddcount = 0, evencount = 0, oddsum = 0, evensum = 0;
    do
    {
        printf("Enter a number\n");
        scanf("%d", &num);
        if (num % 2 == 0)
        {
            evencount++;
            evensum += num;
        }
        else
        {
            oddcount++;
            oddsum += num;
        }
    } while (num != 0);

    printf("Total even numbers: %d and the sum of even numbers : %d\n", evencount, evensum);
    printf("Total odd numbers : %d and the sum of odd numbers : %d\n", oddcount, oddsum);
}