#include<stdio.h>
int main(){
    char ch;
    printf("Enter character E, V, G, A ,F\n");
    scanf("%c", &ch);
    switch (ch)
    {
    case 'E':
        printf("Excellent\n");
        break;
    case 'V':
        printf("Very Good\n");
        break;
    case 'G':
        printf("Good\n");
        break;
    case 'A':
        printf("Average\n");
        break;
    case 'F':
        printf("Fail\n");
        break;
    default:
        printf("Invalid Input, try again\n");
    }
return 0;
}