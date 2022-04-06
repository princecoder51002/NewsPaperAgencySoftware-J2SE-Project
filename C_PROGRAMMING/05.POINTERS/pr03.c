// write a program for area of rectangle using pointers

#include <stdio.h>

int main()
{
    int l, b, a;
    printf("enter length and breadth: \n");
    scanf("%d%d", &l, &b);
    int *p = &l, *r = &b;
    a = (*p) * (*r);
    printf("area = %d", a);
    return 0;
}