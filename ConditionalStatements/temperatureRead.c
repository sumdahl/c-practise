#include<stdio.h>
int main(){
    int temp;
    printf("Enter the temperature\n");
    scanf("%d", &temp);
    if(temp < 0)
        printf("Freezing weather\n");
    else if(temp > 0 && temp < 10)\
        printf("Very cold weather\n");
    else if(temp > 10 && temp < 20)
        printf("Cold weather");
    else if(temp > 20 && temp < 30)
        printf("Normal Weather");
    else if( temp >= 40)
        printf("Its very hot\n");
}