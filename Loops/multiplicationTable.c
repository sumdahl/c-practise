#include<stdio.h>
int main(){
    int i, num, result;
    printf("Enter any number:\n");
    scanf("%d", &num);
    for(i=1; i<=1000; i++){
        result = num * i;
    printf("%d x %d = %d\n", num, i, result);
    }
return 0;
}