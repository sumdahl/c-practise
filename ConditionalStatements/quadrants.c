#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter cordinates of X and Y\n");
    scanf("%d%d", &x, &y);
    if (x > 0 && y > 0)
        printf("The co-ordinates (%d,%d) lies in 1st Quadrant", x, y);
    else if (x < 0 && y > 0)
        printf("The co-ordinates (%d,%d) lies in 2nd Quadrant", x, y);
    else if (x < 0 && y < 0)
        printf("The co-ordinates (%d,%d) lies in 3rd Quadrant", x, y);
    else
        printf("The co-ordinates (%d,%d) lies in 4th Quadrant", x, y);
    return 0;
}