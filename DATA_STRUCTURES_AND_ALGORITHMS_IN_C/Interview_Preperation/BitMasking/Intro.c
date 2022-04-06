#include <stdio.h>

int main()
{
    int a = 16;
    a = a >> 2;

    printf("%d ", a);

    int b = 12;
    b = b << 2;

    printf("%d ", b);

    int c = 12;
    c = c >> 1;

    printf("%d ", c);

    c = c >> 1;
    printf("%d ", c);

    int d = 9;

    d = d << 1;
    printf("%d ", d);

    d = d << 1;
    printf("%d ", d);

    int f = 19;

    if(f & 1 == 1)
    printf("Odd");
    else 
    printf("Even");

    int p = 10, q = 5;

    p = p ^ q;
    q = p ^ q;
    p = p ^ q;

    printf("%d %d ", p, q);

    int k = 5;
    int mask = 1 << 1;

    printf("%d ", k & mask);


    return 0;
}