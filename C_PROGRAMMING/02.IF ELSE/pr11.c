// program for greatest of 3 numbers without using if else ladder and && operator

#include <stdio.h>

int main()
{
    int a, b, c, max;
    printf("enter the value of a,b,c\n");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b)
        max = a;
    else
        max = b;

    if (max > c)
        max = max;
    else
        max = c;

    printf("%d is greatest", max);

    return 0;
}