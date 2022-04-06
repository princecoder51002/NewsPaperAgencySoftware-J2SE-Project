// program for swap of two numbers

#include <stdio.h>

int main()
{
    int a, b, temp;
    printf("exchange a & b: \n");
    scanf("%d%d", &a, &b);
    temp = a;
    a = b;
    b = temp;
    printf("now , a=%d, b=%d\n", a, b);
    return 0;
}