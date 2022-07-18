#include<stdio.h>
int main(){
    int num, i, sum = 0;
    printf("Enter any number:\n");
    scanf("%d", &num);
    for(i=1; i<=num ; i++){
        printf("%d\n", i);
        sum += i;
    }
    printf("The sum of natural number upto %d terms : %d",num,sum);
return 0;
}