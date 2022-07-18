// #include <stdio.h>
// int calculateSum(int, int);
// int main(void){
// int result =calculateSum(1,1); //callback here and assign to result
// printf("Sum is = %d", result);
// }

// int calculateSum(int a , int b){
//     printf("Enter two numbers\n");
//     scanf("%d%d", &a,&b);
//     return a + b; //return value of int type function
// }


//function
#include <stdio.h>
int calculateSum(int a, int b);
int main(){
    int a,b;
    printf("Enter two  numbers\n");
    scanf("%d%d", &a,&b);
    printf("%d is the sum :", calculateSum(a,b));
}
int calculateSum(int a, int b){
    return a + b;
}