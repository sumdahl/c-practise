// Write a C program to find the largest number inside an array.
#include <stdio.h>
int main()
{
    int i, size, max, min;
    printf("Enter the size of array : \n");
    scanf("%d", &size);
    int x[size];
    printf("Enter %d elements : ", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &x[i]);
    }
    // index
    // 0 1 2 3 4
    // value
    // 1 2 3 4 5
    max = x[0];
    min = x[0];
    for (i = 0; i < size; i++)
    {
        if (max < x[i])
        {
            max = x[i];
        }
        if (min > x[i])
        {
            min = x[i];
        }
    }
    printf("Largest number inside an array : %d\n", max);
    printf("Smallest number inside array is %d", min);
}