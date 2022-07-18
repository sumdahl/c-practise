#include <stdio.h>
int main()
{
    // bubble sort.
    int i, j, swap, size;
    printf("Enter the array size : ");
    scanf("%d", &size); // size 5
    int x[size];        // x[5]
    printf("Enter %d elements : ", size);
    for (i = 0; i < size; i++)
    { // index
      // 0 1 2 3 4
      // 3 4 2 5 8
        scanf("%d", &x[i]);
    }
    for (i = 0; i < size - 1; i++) // i < size - 1 => i < 4
    {
        for (j = 0; j < size - i - 1; j++) // j < size - i - 1 => j < 4 - 0 - 1
        {
            if (x[j] > x[j + 1]) // 3 > 4 false , 4 > 2 
            {
                swap = x[j];
                x[j] = x[j + 1]; //x[i] : 2, 
                x[j + 1] = swap;
            }
        }
    }
    printf("After Sorting: \nAscending order is : ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", x[i]); // 3, 
    }
    return 0;
}