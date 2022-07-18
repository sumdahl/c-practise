//Write a program to find fibonacci series using recursion.
#include<stdio.h>
int fibonacci(int n)
{
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return fibonacci(n-1)+fibonacci(n-2);
}
int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    printf("Fibonacci series: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",fibonacci(i));
    }
    return 0;
}
