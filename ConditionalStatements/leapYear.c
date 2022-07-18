//Write a C program to find whether a given year is a leap year or not
#include<stdio.h>
int leapYear(int year);
int main(){
    int year;
    printf("Enter date of year\n");
    scanf("%d", &year);
    leapYear(year);
    return 0;
}
int leapYear(int year){
    if( year % 4 != 0)
        printf("%d is not a leap year:", year);
    else 
        printf("%d is the leap year", year);
}