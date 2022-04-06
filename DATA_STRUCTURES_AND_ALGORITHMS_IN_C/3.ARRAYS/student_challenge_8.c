// write a program to find a pair with sum as k(a+b=k) in sorted array

#include <stdio.h>

int main()
{
    int i, n, j, k;
    printf("enter the value of sum you want: \n");
    scanf("%d", &k);
    printf("enter the value of n: \n");
    scanf("%d", &n);
    int a[n];

    for (i = 0; i < n; i++)
    {
        printf("enter the value at a[%d]: \n", i);
        scanf("%d", &a[i]);
    }
    i = 0, j = n - 1;
    while (i < j)
    {
        if (a[i] + a[j] == k)
        {
            printf("%d+%d=%d\n", a[i], a[j], k);
            i++;
            j--;
        }
        else if (a[i] + a[j] < k)
            i++;
        else
            j--;
    }

    return 0;
}