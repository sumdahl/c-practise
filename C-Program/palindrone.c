//palindrone number
#include<stdio.h>
int main(){
    int number, temp, rev_number = 0;
    printf("Enter the number\n");
    scanf("%d", &number);
    int x = number;

    while(number > 0){
        temp = number % 10; //121 mod 10 => 1, 12 mod 10 => 2
        rev_number = rev_number * 10 + temp; //above 1 asssign in rev_number , 2 assign here
        number = number / 10; // 121 / 10 => integer 12 this 12 goes above
    }
    if(rev_number == x)
        printf("%d is the palindrone number", rev_number);
    else 
        printf("It is not a palindrone number");
    return 0;
}