// input message sent and calls , get mobile bill as shown
// if msg<=50 then rs.10 else .25
// if calls <=200 then 0.75 else 0.95
// add rs.100 as rent
// calculate tax 12.5% , if bill <=1000 else 22.5% and get grross bill

#include <stdio.h>

int main()
{
    float msg, calls, pmsg, pc, bill, tax, gross;
    printf("enter msg and calls: \n");
    scanf("%f%f", &msg, &calls);
    if (msg <= 50)
        pmsg = msg * 0.10;
    else
        pmsg = msg * 0.25;
    printf("price of messages : %f\n", pmsg);
    if (calls <= 200)
        pc = calls * 0.75;
    else
        pc = calls * 0.95;
    printf("price of calls: %f\n", pc);

    bill = pmsg + pc + 100;
    printf("bill : %f\n", bill);

    if (bill <= 1000)
        tax = 0.125 * bill;
    else
        tax = 0.225 * bill;
    printf("amount of tax : %f\n", tax);

    gross = bill + tax;
    printf("gross bill : %f\n", gross);
    return 0;
}