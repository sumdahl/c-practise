#include <stdio.h>
int main()
{
    int marksInMath, marksInPhysics, marksInChemistry, total1, total2;
    printf("Enter the marks in Maths, Physics and Chemistry\n");
    scanf("%d%d%d", &marksInMath, &marksInPhysics, &marksInChemistry);
    total1 = marksInMath + marksInPhysics + marksInChemistry;
    total2 = total1 - marksInChemistry;

    if (total1 >= 190 || total2 >= 140)
        printf("Congratulations, you are eligible for admission");
    else
        printf("Sorry!, you are not eligible for admission");
    return 0;
}