// write a program for reverse and factorial of each digit of number

#include <stdio.h>

int main()
{
    int n, rev = 0, r, factorial = 1, prince, m;
    printf("enter the value of n: \n");
    scanf("%d", &n);
    prince = n;
    while (n != 0)
    {
        r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
        m = 1;
        factorial = 1;
        while (m <= r)
        {
            factorial = factorial * m;
            m++;
        }
        printf("factorial of %d : %d\n", r, factorial);
    }
    printf("reverse : %d\n", rev);
    return 0;
}