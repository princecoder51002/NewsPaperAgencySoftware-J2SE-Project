// // write a program for fibonacci series using recursion

// #include <stdio.h>

// int fib(int n)
// {
//     if (n <= 1)
//         return n;
//     else
//         return fib(n - 2) + fib(n - 1);
// }

// int main()
// {
//     int r = fib(7);
//     printf("%d", r);
//     return 0;
// }

// // using iterative method

// #include <stdio.h>

//     int
//     fib(int n)
// {
//     int t0 = 0, t1 = 1, s = 0, i;
//     if (n <= 1)
//         return n;
//     else
//     {
//         for (i = 2; i <= n; i++)
//         {
//             s = t0 + t1;
//             t0 = t1;
//             t1 = s;
//         }
//         return s;
//     }
// }
// int main()
// {
//     int r = fib(7);
//     printf("%d", r);
//     return 0;
// }

// alternative faster method

#include <stdio.h>

    int f[10];
int mfib(int n)
{
    if (n <= 1)
    {
        f[n] = n;
        return n;
    }
    else
    {
        if (f[n - 2] == -1)
            f[n - 2] = mfib(n - 2);
        if (f[n - 1] == -1)
            f[n - 1] = mfib(n - 1);
        f[n] = f[n - 2] + f[n - 1];
        return f[n - 2] + f[n - 1];
    }
}
int main()
{
    int i;
    for (i = 0; i < 10; i++)
        f[i] = -1;

    printf("%d", mfib(7));
    return 0;
}