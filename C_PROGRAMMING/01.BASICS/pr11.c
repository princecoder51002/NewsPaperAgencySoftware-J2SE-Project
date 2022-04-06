// if a five digit number is input through keyboard , write a program tp reverse the number

#include <stdio.h>

int main()
{
    int n, r1, r2, r3, r4, rev;
    printf("enter five digits no. : \n");
    scanf("%d", &n);
    r1 = n % 10;
    n = n / 10;
    r2 = n % 10;
    n = n / 10;
    r3 = n % 10;
    n = n / 10;
    r4 = n % 10;
    n = n / 10;
    rev = r1 * 10000 + r2 * 1000 + r3 * 100 + r4 * 10 + n * 1;
    printf("reverse = %d", rev);
    return 0;
}