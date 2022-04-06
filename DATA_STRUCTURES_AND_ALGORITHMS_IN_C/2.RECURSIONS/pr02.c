// write a program for factorial of n

#include <stdio.h>

int fact(int n)
{
    if (n == 0)
        return 1;
    else
        return fact(n - 1) * n;
}
int main()
{
    int r;
    r = fact(-1);
    printf("%d", r);
    return 0;
}

//using loops

// #include <stdio.h>

// int fact(int n)
// {
//     int i, f = 1;
//     for (i = 1; i <= n; i++)
//     {
//         f = f * i;
//     }
//     return f;
// }

// int main()
// {
//     int r;
//     r = fact(7);
//     printf("%d", r);
//     return 0;
// }