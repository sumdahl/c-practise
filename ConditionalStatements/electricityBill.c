#include <stdio.h>
int main()
{
    int custId, unit;
    char name[20];
    float chg, grossAmt, netAmt, surCharge = 0;
    printf("Enter the customer ID\n");
    scanf("%d", &custId);
    printf("Enter the name of the consumer:\n");
    scanf("%s", name);
    printf("Enter the unit consumed by the customer:\n");
    scanf("%d", &unit);
    if (unit < 200)
        chg = 1.20;
    else if (unit >= 200 && unit < 400)
        chg = 1.50;
    else if (unit >= 400 && unit < 600)
        chg = 1.90;
    else
        chg = 2.00;
    // calculate gross amount ;
    grossAmt = unit * chg;
    if (grossAmt > 400)
    {
        surCharge = (grossAmt * 15) / 100;
        netAmt = grossAmt + surCharge;
    }
    if (netAmt < 100) //min amount paid by customer = 100
        netAmt = 100;
    printf("Customer IDNO: %d\n", custId);
    printf("Customer Name : %s\n", name);
    printf("Unit consumed : %d\n", unit);
    printf("Amount charges: %0.2f\n", grossAmt);
    printf("Surchage Amount : %0.2f\n", surCharge);
    printf("Net Amound paid by the customer:%0.2f\n", netAmt);
    return 0;
}