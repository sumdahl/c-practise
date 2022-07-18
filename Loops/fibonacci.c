#include <stdio.h>
int main()
{
    int num, a = 0, b = 1, fibo, i;
    printf("Input n terms : ");
    scanf("%d", &num);
    printf("Fibonacci series upto %d terms : \n", num);
    printf("%5d %5d ", a, b);
    for (i = 3; i < num; i++)
    {
        fibo = a + b; //0+1 //1+1 //3 //5
        printf("%5d ", fibo); //1//2//3 //5
        a = b; //a = 1 //a=1 //a = 2// a = 3
        b = fibo; // b = 1// b =2, //b=3 //b=5
    }
    printf("\n");
    return 0;
}