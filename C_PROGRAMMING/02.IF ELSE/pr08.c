// program to check profit , loss or nothing

#include <stdio.h>

int main()
{
    float pp, sp;
    printf("enter the value of pp,sp: \n");
    scanf("%f%f", &pp, &sp);
    if (pp < sp)
        printf("profit : %f\n", sp - pp);
    else if (pp > sp)
        printf("loss : %f", pp - sp);
    else
        printf("no profit no loss");
    return 0;
}