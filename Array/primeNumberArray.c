// prime number

// #include <stdio.h>
// int main()
// {
//     int i, j, size, prime, count;
//     printf("Enter the size of an array: \n");
//     scanf("%d", &size);
//     int x[size]; // size 5
//     printf("Enter %d elements : \n", size);
//     for (i = 0; i < size; i++)
//     {
//         scanf("%d", &x[i]); // x[5] size of x is
//     }

//     // now prime has 0 index value => 1 // suppose x's elements: 1 2 3 4 2
//     printf("Prime Numbers : \n");
//     for (i = 0; i < size; i++)
//     {
//         prime = x[i];
//         count = 0;
//         for (j = 2; j <= prime; i++)
//         {
//             if (prime % j == 0){
//                 count ++;
//                 break;
//             }

//         }
//          if (count == 0 && prime!= 1 && prime!= 0)
//             printf(" %d\n", prime);
//     }

//     return 0;
// }

#include <stdio.h>
int main()
{
    int i, j, size, prime, count = 0;
    printf("Enter the size of an array: \n");
    scanf("%d", &size);
    int x[size]; // size 5
    printf("Enter %d elements : \n", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &x[i]); // x[5] size of x is
    }
    // now prime has 0 index value => 1 // suppose x's elements: 1 2 3 4 2
    for (i = 0; i < size; i++)
    {
        count = 0;
        prime = x[i];
        if (prime == 1 || prime == 0)
        {
            continue;
        }
        for (j = 2; j <= prime; j++)
        {
            if (prime % j == 0)
            {
                count += 1;
            }
        }
        if (count <= 1)
            printf("Prime Numbers : %d\n", prime);
    }
    return 0;
}