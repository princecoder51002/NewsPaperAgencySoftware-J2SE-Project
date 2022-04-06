// program for smallest element in an array

#include <stdio.h>

int main()
{
    int n, i, min;
    printf("enter the value of n: \n");
    scanf("%d", &n);
    int s[n];
    for (i = 0; i < n; i++)
    {
        printf("enter the value at s[%d]: \n", i);
        scanf("%d", &s[i]);
    }
    min = s[0];
    for (i = 0; i < n; i++)
    {
        if (min > s[i])
            min = s[i];
    }
    printf("\nsmallest element : %d\n", min);
    return 0;
}