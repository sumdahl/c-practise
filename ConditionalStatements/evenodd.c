//Write a C program to check whether a given number is even or odd.
#include<stdio.h>
int evenOrOdd(int num);
int main(){
    int num;
    printf("Enter any positive integer\n");
    scanf("%d", &num);
    evenOrOdd(num);
    return 0;
}
int evenOrOdd(int num){
    if(num % 2 != 0)
        printf("%d is odd number: ", num);
    else
        printf("%d is even number: ", num);
    return num;
}