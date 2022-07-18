#include<stdio.h>
int main(){
    int i,num, sum = 0;
    printf("Input number of terms:\n");
    scanf("%d", &num);
    printf("The odd numbers are:\n");
    for(i=1; i<=num; i++){
        printf("%2d\n", i*2-1);
        sum+= i*2 -1;
    }
printf("The sum of odd natural numbers upto %d terms : %d\n", num,sum);
}