// program for reverse of 3 digit number

#include <stdio.h>

int main()
{
    int n, r1, r2, rev, sum;
    printf("enter 3 digit number: \n");
    scanf("%d", &n);
    r1 = n % 10;
    n = n / 10;
    r2 = n % 10;
    n = n / 10;
    rev = r1 * 100 + r2 * 10 + n * 1;
    printf("\n reverse = %d", rev);
    sum = r1 + r2 + n;
    printf("\n sum = %d", sum);
    return 0;
}