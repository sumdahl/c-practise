#include <stdio.h>
int main()
{
    int st_no, en_no, num, i, flag;
    printf("Input starting number of range : ");
    scanf("%d", &st_no);
    printf("Input ending number of range : ");
    scanf("%d", &en_no);
    printf("The prime number between %d and %d are : \n", st_no, en_no);
    for (num = st_no; num <= en_no; num++)
    {
        flag = 0;
        for (i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0 && num != 1)
            printf("%d ", num);
    }
}