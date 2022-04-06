// write a program to print table of n using while loop

#include <stdio.h>

int main()
{
    int n, m;
    printf("enter the value of n: \n");
    scanf("%d", &n);
    m = 1;
    while (m <= 10)
    {
        printf("%d*%d = %d\n", n, m, n * m);
        m++;
    }
    return 0;
}