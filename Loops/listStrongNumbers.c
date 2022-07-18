// #include <stdio.h>
// int factorial(int);
// int main()
// {
//     int stno, enno, i, num, sum = 0, fact, temp;
//     printf("Input the starting number : ");
//     scanf("%d", &stno);
//     printf("Input the ending number : ");
//     scanf("%d", &enno);
//     printf("The strong numbers from %d to %d are: \n", stno, enno);
//     for (i = stno; i <= enno; i++)
//     {
//         for (num = i; i != 0; i /= 10)
//         {
//             temp = i % 10;
//             fact = factorial(temp);
//             sum += fact;
//         }
//         if (num == sum)
//         {
//             printf("%d", num);
//         }
//         sum = 0;
//     }
//     return 0;
// }
// int factorial(int temp)
// {
//     if (temp == 0 || temp == 1)
//         return 1;
//     else
//         return temp * factorial(temp - 1); // recursion function
// }

#include <stdio.h>
int main()
{
    int stno, enno, i, j, sum = 0, fact = 1, k, num;
    printf("Input the starting number :");
    scanf("%d", &stno);
    printf("Input the ending number: ");
    scanf("%d", &enno);
    for (k = stno; k <= enno; k++)
    {
        num = k;
        sum = 0;
        for (j = k; j > 0; j /= 10)
        {
            fact = 1;
            for (i = 1; i <= j % 10; i++)
            {
                fact = fact * i;
            }
            sum += fact;
        }
        if (sum == num)
            printf("%d ", num);
    }
    printf("\n");
}