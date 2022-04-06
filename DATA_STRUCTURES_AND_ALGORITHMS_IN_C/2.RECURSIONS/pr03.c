// write a program for exponential using recursion

#include <stdio.h>

int power(int m, int n)
{
    if (n == 0)
        return 1;
    else
        return power(m, n - 1) * m;
}
int main()
{
    int r;
    r = power(2, 9);
    printf("%d", r);
    return 0;
}

// alternative method or we can say faster method for this

#include <stdio.h>

int power1(int m, int n)
{
    if (n == 0)
        return 1;
    else if (n % 2 == 0)
        return power1(m * m, n / 2);
    else
        return m * power1(m * m, (n - 1) / 2);
}
int main()
{
    int r = power1(2, 8);
    printf("%d", r);

    return 0;
}