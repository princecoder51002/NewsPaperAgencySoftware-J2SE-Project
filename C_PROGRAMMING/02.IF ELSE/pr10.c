// program for greatest of four numbers

#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("enter the value of a, b, c, d: \n");
    scanf("%d%d%d%d", &a, &b, &c, &d);
    if (a > b && a > c && a > d)
        printf("a is greatest");
    else if (b > c && b > d && b > a)
        printf("b is greatest");
    else if (c > a && c > b && c > d)
        printf("c is greatest");
    else
        printf("d is greatest");
    return 0;
}