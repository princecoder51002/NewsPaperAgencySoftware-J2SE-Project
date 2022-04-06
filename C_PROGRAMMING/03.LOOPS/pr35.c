// write a program for fibnocci series
// 0 1 1 2 3.........N

#include <stdio.h>

int main()
{
    int n, a = 0, b = 1, c = 0;
    printf("enter the value of n: \n");
    scanf("%d", &n);
    while (c <= n)
    {
        a = b;
        b = c;
        printf("%d", c);
        c = a + b;
    }
    return 0;
}