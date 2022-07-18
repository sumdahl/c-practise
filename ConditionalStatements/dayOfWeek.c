// #include<stdio.h>
// int main(){
//     int num;
//     printf("Enter any number from 1 to 7\n");
//     scanf("%d", &num);
//     switch(num){
//         case 1:
//         printf("It is Sunday\n");
//         break;
//         case 2:
//         printf("It is Monday\n");
//         break;
//         case 3:
//         printf("It is Tuesday\n");
//         break;
//         case 4:
//         printf("It is Wednesday\n");
//         break;
//         case 5:
//         printf("It is Thursday\n");
//         break;
//         case 6:
//         printf("It is Friday\n");
//         break;
//         case 7:
//         printf("it is Saturday\n");
//         break;
//         default:
//         printf("Invalid Input, Input number from 1 to 7");        
//     }
//     return 0;
// }
//same program using if else statements:
#include<stdio.h>
int main(){
    int num;
    printf("Enter any number from 1 to 7\n");
    scanf("%d", &num);
    if( num == 1)
        printf("It is Sunday\n");
    else if(num == 2)
        printf("It is Monday\n");
    else if(num == 3)
        printf("It is Tuesday\n");
    else if(num == 4)
        printf("It is Wednesday\n");
    else if(num == 5)
        printf("It is Thursday\n");
    else if(num == 6)
        printf("It is Friday\n");
    else if(num == 7)
        printf("It is Saturday\n");
    else
        printf("Invalid INput, input number from 1 to 7");
    return 0;
}