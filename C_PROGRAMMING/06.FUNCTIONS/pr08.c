// write a program for greatest of 3 numbers with arguement with return

#include <stdio.h>

int main()
{
    int aa, bb, cc;
    printf("enter the value of aa,bb,cc: \n");
    scanf("%d%d%d", &aa, &bb, &cc);
    int greatest(int a, int b, int c);
    int x = greatest(aa, bb, cc);
    printf("max=%d", x);
}
int greatest(int a, int b, int c)
{
    if (a > b && a > c)
        return (a);
    else if (b > a && b > c)
        return (b);
    else
        return (c);
}