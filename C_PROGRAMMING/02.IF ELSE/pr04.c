// input purchase price(pp) and sale price(sp). find out profit or loss with amount

#include <stdio.h>

int main()
{
    float pp, sp;
    printf("enter the value of pp,sp: \n");
    scanf("%f%f", &pp, &sp);
    if (pp > sp)
        printf("loss = %f", pp - sp);
    else
        printf("profit = %f", sp - pp);
    return 0;
}