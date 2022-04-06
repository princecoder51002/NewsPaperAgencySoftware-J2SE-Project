// write a program for static and global variables in recursion

#include <stdio.h>

int fun1(int n)
{
    if (n > 0)
    {
        return fun1(n - 1) + n;
    }
    return 0;
}
int main()
{
    int a = 5;
    printf("%d", fun1(a));
    return 0;
}

// if we introduce x as an static or global variable

#include <stdio.h>

int fun(int n)
{
    static int x = 0;
    if (n > 0)
    {
        x++;
        return fun(n - 1) + x;
    }
    return 0;
}
int main()
{
    int a = 5;
    printf("%d", fun(a));
    return 0;
}