// program to add all even and odd values seperately from 1 to n

#include <stdio.h>

int main()
{
    int n, m, sum1 = 0, sum2 = 0;
    printf("enter the value of n: \n");
    scanf("%d", &n);
    for (m = 1; m <= n; m++)
    {
        if (m % 2 == 0)
            sum1 = sum1 + m;
        else
            sum2 = sum2 + m;
    }
    printf("sum of odd numbers: %d\n", sum2);
    printf("sum of even nmbers: %d", sum1);
    return 0;
}