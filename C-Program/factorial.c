// //factorial of n number 5! = 5*4*3*2*1
#include<stdio.h>
int main(){
    int i,n,result;
    result = 1;
    printf("Enter any number\n");
    scanf("%d", &n);
    for(i = n ; i>=1; i--){
        result = result * i;
    }
    printf("%d is the result", result);
    return 0;
}

//normal recursion

// #include <stdio.h>
// int fact(int n)
// {
//     if (n == 0)
//     {
//         return 1;
//     }
//     if (n == 1)
//     {
//         return 1;
//     }
//     else
//     {
//         return n *fact(n - 1);
//     }
// }
// int main()
// {
//     printf("%d", fact(4));
// }

//taking input from user and recursive function also
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter any number\n");
//     scanf("%d", &n);
//     printf("%d is the result", recursiveFactorial(n));
// }

// int recursiveFactorial(int n)
// {
//     if (n == 0)
//         return 1;
//     if (n == 1)
//         return 1;
//     else
//     {
//         return n * recursiveFactorial(n - 1);
//     }
// }

