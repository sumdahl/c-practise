#include <stdio.h>
int main()
{
    int num;
    printf("Enter any number from 91-12)\n");
    scanf("%d", &num);
    switch (num)
    {
    case 1:
        printf("It is January\n");
        break;
    case 2:
        printf("It is February\n");
        break;
    case 3:
        printf("It is March\n");
        break;
    case 4:
        printf("It is April\n");
        break;
    case 5:
        printf("It is May\n");
        break;
    case 6:
        printf("It is June\n");
        break;
    case 7:
        printf("It is July\n");
        break;
    case 8:
        printf("It is August\n");
        break;
    case 9:
        printf("It is September\n");
        break;
    case 10:
        printf("It is October\n");
        break;
    case 11:
        printf("It is Novemeber\n");
        break;
    case 12:
        printf("It is December\n");
        break;
    default:
        printf("Invalid input, please try again\n");
    }
return 0;
}