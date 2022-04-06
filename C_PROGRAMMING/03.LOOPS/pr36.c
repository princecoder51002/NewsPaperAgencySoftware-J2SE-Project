// write a program to print a table of n using do while loop

#include <stdio.h>

int main()
{
    int n, m;
    printf("enter the value of n: \n");
    scanf("%d", &n);
    m = 1;
    do
    {
        printf("%d*%d = %d\n", n, m, n * m);
        m++;
    } while (m <= 10);
    return 0;
}