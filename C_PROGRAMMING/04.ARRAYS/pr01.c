// write a program for greatest element in a array

#include <stdio.h>

int main()
{
    int n, i, max;
    printf("enter the value of n: \n");
    scanf("%d", &n);
    int s[n];
    for (i = 0; i < n; i++)
    {
        printf("enter number at s[%d] pos. :\n", i);
        scanf("%d", &s[i]);
    }
    max = s[0];
    for (i = 0; i < n; i++)
    {
        if (s[i] > max)
            max = s[i];
    }
    printf("\n greatest = %d", max);
    return 0;
}