// menu driven program using switch case
#include <stdio.h>
#include <math.h>
// explicity defining function
float areaOfCircle(float);
float areaOfRectangle(float, float);
float areaOfSquare(float);
float areaOfTriangle(float, float);
#define PI 3.14159
int main()
{
    int num;
    float radius, length, breadth, base, height;
    printf("Press 1 to calculate area of circle:\n");
    printf("Press 2 to calculate area of rectangle:\n");
    printf("Press 3 to calculate area of square:\n");
    printf("Press 4 to calculate area of triangle:\n");

    scanf("%d", &num);
    switch (num)
    {
    case 1:
        // callback function
        printf("%0.2f is the area of the circle\n", areaOfCircle(radius));
        break;
    case 2:
        printf("%0.2f is the area of the rectangle\n", areaOfRectangle(length, breadth));
        break;
    case 3:
        printf("%0.2f is the area of square\n", areaOfSquare(length));
        break;
    case 4:
        printf("%0.2f is the area of triangle\n", areaOfTriangle(base, height));
        break;
    default:
        printf("Invalid Input, please try again!");
    }
    return 0;
}

// calculate area
float areaOfCircle(float radius)
{
    printf("Enter the value of radius:\n");
    scanf("%f", &radius);
    return PI * pow(radius, 2);
}
float areaOfRectangle(float length, float breadth)
{
    printf("Enter the lenght and breadth of rectangle:\n");
    scanf("%f%f", &length, &breadth);
    return length * breadth;
}
float areaOfSquare(float length)
{
    printf("Enter the length:\n");
    scanf("%f", &length);
    return pow(length, 2);
}
float areaOfTriangle(float base, float height)
{
    printf("Enter the base and height of triangle:\n");
    scanf("%f%f", &base, &height);
    return (base * height) / 2;
}
