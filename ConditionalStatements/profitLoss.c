#include <stdio.h>
int main()
{
    int cp, sp;
    printf("Enter cost price and selling price:\n");
    scanf("%d%d", &cp, &sp);
    if (cp > sp)
        printf("Loss : %d", cp - sp);
    else
        printf("Profit: %d", sp - cp);
    return 0;
}