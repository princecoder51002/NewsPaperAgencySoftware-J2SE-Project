// if a six digit number is input through keyboard,write a program to obtain the sum of first and last digi of this number

#include <stdio.h>

int main()
{
    int n, r1, r2, sum;
    printf("enter a six digit number: \n");
    scanf("%d", &n);
    r1 = n % 10;
    n = n / 100000;
    sum = r1 + n;
    printf("sum=%d", sum);
    return 0;
}