#include <stdio.h>
int main()
{
    char ch;
    printf("%u","a");
    printf("Enter any character\n");
    scanf("%c", &ch);
    if(ch>= 'a' && ch <= 'z')
        printf("%c is an lowercase alphabet\n", ch);
    else if(ch >= 'A' && ch <= 'Z')
        printf("%c is an uppercase alphabet\n", ch);
    else if(ch >= '0' && ch <= '9')
        printf("%c is a digit", ch);
    else 
        printf("%c is s special character", ch);
    return 0;
}   