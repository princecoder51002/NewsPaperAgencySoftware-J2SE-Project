// write a program for sum of n natural numbers using recurssion

#include <stdio.h>

int sum(int n)
{
    if (n == 0)
        return 0;
    else
        return sum(n - 1) + n;
}
int main()
{
    int r;
    r = sum(35);
    printf("%d", r);
    return 0;
}

// now using iterated method

#include <stdio.h>

int sum(int n)
{
    int i, s = 0;
    for (i = 0; i <= n; i++)
    {
        s = s + i;
    }
    return s;
}
int main()
{
    int r;
    r = sum(35);
    printf("%d", r);
    return 0;
}

// one more alternative method

#include <stdio.h>

int sum(int n)
{
    return n * (n + 1) / 2;
}
int main()
{
    int r = sum(35);
    printf("%d", r);
    return 0;
}