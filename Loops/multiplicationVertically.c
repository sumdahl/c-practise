#include<stdio.h>
int main(){
    int i,j,num, result;
    printf("Input upto the table from 1 to :");
    scanf("%d",&num);
    for(i=1; i<=num; i++){
        for(j=1; j<=10; j++){
            result = i * j ;
            printf("%d x %d = %d\n", i,j,result);
        }
    printf("\n");
    }
return 0;
}









