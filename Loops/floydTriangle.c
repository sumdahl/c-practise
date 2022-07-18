// #include <stdio.h>
// int main()
// {
//     int i, j, k, l;
//     for (i = 0; i < 6; i++)
//     {
//         if (i % 2 == 0)
//         {
//             k = 0;
//             l = 1;
//         }
//         else
//         {
//             k = 1;
//             l = 0;
//         }
//         for (j = 0; j < i; j++)
//         {
//             if (j % 2 == 0)
//             {
//                 printf("%d", k);
//             }
//             else
//             {
//                 printf("%d", l);
//             }
//         }

//         printf("\n");
//     }
// }

#include <stdio.h>
int main()
{
    int i, j, k, l, rows;
    printf("Enter number of rows : ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++)
    {
        if (i % 2 == 0)
        {
            k = 1; l = 0;
        }
        else
        {
            k = 0;l = 1;
        }
        for (j = 1; j <= i; j++)
        {
            if (j % 2 == 0)
                 printf("%d", k);
            else
                printf("%d", l);
        }
        printf("\n");
    }
}