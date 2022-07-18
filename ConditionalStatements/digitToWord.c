#include<stdio.h>
int main(){
    int num;
    printf("Enter number (1-7)\n");
    scanf("%d", &num);
    switch (num)
    {
    case 1:
        printf("One\n");
        break;
    case 2:
        printf("Two\n");
        break;
    case 3:
        printf("Three\n");
        break;
    case 4:
        printf("Four\n");
        break;
    case 5:
        printf("Five\n");
        break;
    case 6:
        printf("Six\n");
        break;
    case 7:
        printf("Seven\n");
        break;
    default:
        printf("Invalid Input\n");
    }
return 0;
}