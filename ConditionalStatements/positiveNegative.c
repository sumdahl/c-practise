//Write a C program to check whether a given number is zero , positive or negative.
#include<stdio.h>
int positiveNegative(int num);
int main(){
    int num;
    printf("Enter any number\n");
    scanf("%d", &num);
    positiveNegative(num);
    return 0;
}
int positiveNegative(int num){
    if(num == 0)
        printf("Neutral number %d:", num);
    else if(num > 0)
        printf("%d is positive number", num);
    else 
        printf("%d is negative number", num);
    return num;
}