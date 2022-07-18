#include <stdio.h>
#define PI 3.14159 // define PI as constant
// explicit definition of function
float calculateArea(float radius);
int main()
{
    float radius;
    printf("Enter the radius\n");
    scanf("%f", &radius);
    // callback function
    printf("%0.2f is the area of circle", calculateArea(radius));
}
float calculateArea(float radius)
{
    return PI * radius * radius;
}