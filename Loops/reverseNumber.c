#include <stdio.h>
int main()
{
    int num, rev_num, i;
    printf("Input any number : ");
    scanf("%d", &num);
    printf("The number in reverse order is : ");
    for (i = 5; i <= num; i--)
    {
        rev_num = num % 10;
        num = num / 10;
        printf("%d", rev_num);
        if (num == 0)
            break;
    }
}
// while(num>0){
//         rev_num = num % 10;
//         num = num / 10;
//         printf("%d", rev_num);
//     }
