// write a program for simple interest using call by reference

#include <stdio.h>

int main()
{
    int p, r, t;
    printf("enter the value of p,r,t: \n");
    scanf("%d%d%d", &p, &r, &t);
    float simpleinterest(int *m, int *n, int *l);
    float prince = simpleinterest(&p, &r, &t);
    printf("simple interest: %f", prince);
    return 0;
}
float simpleinterest(int *m, int *n, int *l)
{
    float s;
    s = (*m) * (*n) * (*l) / 100;
    return (s);
}