// write a program for greatest of 2 numbers without arguements

#include <stdio.h>
void max2()
{
    int a, b;
    printf("enter the value of a and b: \n");
    scanf("%d%d", &a, &b);
    if (a > b)
        printf("a is greatest");
    else
        printf("b is greatest");
}
int main()
{
    void max2();
    max2();
    return 0;
}