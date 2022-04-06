// write a program for linear searching searching in array

#include <stdio.h>

int main()
{
    int n, count = 0, i, wanted;
    printf("enter the value of n: \n");
    scanf("%d", &n);
    int s[n];
    for (i = 0; i < n; i++)
    {
        printf("enter salary at s[%d]: \n", i);
        scanf("%d", &s[i]);
    }
    printf("enter the value want to search: \n");
    scanf("%d", &wanted);
    for (i = 0; i < n; i++)
    {
        if (wanted == s[i])
        {
            printf("found at %d location\n", i);
            count++;
        }
    }
    if (count == 0)
        printf("not found");
    else
        printf("found %d times", count);
    return 0;
}