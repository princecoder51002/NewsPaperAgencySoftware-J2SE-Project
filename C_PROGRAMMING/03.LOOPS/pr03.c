// program to print a table of n

#include <stdio.h>

int main()
{
    int n, m;
    printf("enter the value of n: \n");
    scanf("%d", &n);
    printf("\n");
    printf("******************multiplication table of %d*****************\n", n);
    for (m = 1; m <= 10; m++)
    {
        printf("%d*%d=%d\n", n, m, n * m);
    }

    return 0;
}