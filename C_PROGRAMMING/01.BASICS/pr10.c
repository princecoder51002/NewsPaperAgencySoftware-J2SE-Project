// input a five digit number through keyboard , write a program to calculate the sum of its digits

#include <stdio.h>

int main()
{
    int n, r1, r2, r3, r4, sum;
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
    sum = r1 + r2 + r3 + r4 + n;
    printf("sum=%d", sum);
    return 0;
}