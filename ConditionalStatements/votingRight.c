//Write a C program to read the age of a candidate and determine whether it is eligible for casting his/her own vote. 
#include<stdio.h>
int votingRight(int age);
int main(){
    int age;
    printf("Enter the age\n");
    scanf("%d", &age);
    votingRight(age);
    return 0;
}
int votingRight(int age){
    if (age >= 21)
        printf("You are allowed to cast your vote");
    else
        printf("You are not allowed to cast your vote");
    return age;
}