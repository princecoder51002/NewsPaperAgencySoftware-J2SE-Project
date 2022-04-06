// write a program for simple interest using pointers

#include <stdio.h>

int main()
{
    int p, r, t, s;
    printf("enter principal value, rate of interest and time: \n");
    scanf("%d%d%d", &p, &r, &t);
    int *m = &p, *q = &r, *c = &t;
    s = (*m) * (*q) * (*c) / 100;
    printf("simple inetrest : %d\n", s);
    printf("total amount : %d\n", s + (*m));
    return 0;
}