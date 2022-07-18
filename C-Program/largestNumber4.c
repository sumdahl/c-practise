#include <stdio.h>
int main()
{
    int a, b, c, d, m1, m2, m;
    printf("Enter any four numbers\n");
    scanf("%d%d%d%d", &a, &b, &c, &d);
    m1 = (a > b) ? a : b;
    m2 = (c > d) ? c : d;
    m = (m1 > m2) ? m1 : m2;
    printf("The largest number is %d", m);
    return 0;
}