// write a program for NcR problem using recursion (i.e selection)

// simple function
#include <stdio.h>

int fact(int n)
{
    if (n == 0)
        return 1;
    else
        return fact(n - 1) * n;
}
int ncr(int n, int r)
{
    int num, den;
    num = fact(n);
    den = fact(r) * fact(n - r);
    return num / den;
}
int main()
{
    printf("%d", ncr(5, 1));
    return 0;
}

// now recursive function

#include <stdio.h>

int NCR(int n, int r)
{
    if (n == r || r == 0)
        return 1;
    else
        return NCR(n - 1, r - 1) + NCR(n - 1, r);
}
int main()
{
    printf("%d", NCR(5, 3));
    return 0;
}