//Write a C program to check whether two numbers are equal or not.
#include<stdio.h>
int main(){
    int a , b;
    printf("Enter any two positive numbers\n");
    scanf("%d%d", &a, &b);
    if(a!=b)
        printf("Numbers are not equal");
    else
        printf("Numbers are equal");
    return 0;
}