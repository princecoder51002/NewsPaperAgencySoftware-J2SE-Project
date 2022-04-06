// program for electricity bill , follow the instructions written below
// if units <=200 --> rs.2
// if units <=400 --> rs.3
// if units <=600 --> rs.4
// else 5
// aplly 10% tax and get gross bill

#include <stdio.h>

int main()
{
    int units, rpu;
    float grossbill, bill;
    printf("enter units consumed: \n");
    scanf("%d", &units);
    if (units <= 200)
        rpu = units * 2;
    else if (units <= 400)
        rpu = units * 3;
    else if (units <= 600)
        rpu = units * 4;
    else
        rpu = units * 5;

    bill = rpu;
    grossbill = (0.1 * bill) + bill;
    printf("gross bill : %f\n", grossbill);

    return 0;
}