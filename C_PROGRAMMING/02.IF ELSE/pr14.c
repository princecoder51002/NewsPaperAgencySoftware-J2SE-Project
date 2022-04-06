// write a program for greatest of four numbers using conditional operators

#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("enter the value of a,b,c,d: \n");
    scanf("%d%d%d%d", &a, &b, &c, &d);
    (a > b && a > c && a > d ? printf("a is greatest") : b > a && b > c && b > d ? printf("b is greatest") : c > a && c > b && c > d ? printf("c is greatest") : printf("d is greatest"));
    return 0;
}