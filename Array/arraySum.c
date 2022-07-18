//Write a C program that reads 10 number and find their sum.
#include<stdio.h>
int main(){
    int size, i, sum = 0;
    printf("Enter the size of array : \n");
    scanf("%d", &size);
    int x[size];
    printf("Enter %d elements: \n", size);
    for(i=0; i<size; i++){
        scanf("%d", &x[i]);
        sum+=x[i];
    }
    printf("Sum of 10 elements of array : %d", sum);
    return 0;
}