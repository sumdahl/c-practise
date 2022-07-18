#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the three sides value of a triangle\n");
    scanf("%d%d%d", &a,&b,&c);
    if(a == b & b == c)
        printf("It is an equilateral Triangle\n");
    else if(a == b || b == c || c == a)
        printf("It is an isosceles triangle");
    else
        printf("It is a scalene triangle\n");
    return 0;
}