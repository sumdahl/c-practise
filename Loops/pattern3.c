#include<stdio.h>
int main(){
    int i,j,rows;
    printf("Enter number of rows:");
    scanf("%d", &rows);
    for(i=1; i<=rows; i++){
        for(j=1; j<=i ; j++){ // 1<=2; print & again print
            printf("%d ", i);
        }
        printf("\n");
    }
return 0;
}