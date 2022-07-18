#include<stdio.h>
int main(){
    int m , n;
    printf("Enter any number\n");
    scanf("%d", &m);
    if ( m == 0)
        printf("The value of n = 0");
    else if (m > 1)
        printf("The value of n = 1");
    else
        printf("The value of n = -1");
    return 0;
}