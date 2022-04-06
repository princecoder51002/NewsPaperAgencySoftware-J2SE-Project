// write a program for simple interest using pointers to structures

#include <stdio.h>

struct simpleinterest
{
    int p;
    int r;
    int t;
    float si;
};
int main()
{
    struct simpleinterest *a;
    struct simpleinterest x;
    a = &x;
    printf("enter the principle value , rate of interest and time: \n");
    scanf("%d%d%d", &x.p, &x.r, &x.t);
    (*a).si = (*a).p * (*a).r * (*a).t;
    printf("simple interest : %f", (*a).si);
    return 0;
}