// write a program to find multiple missing elements in an array

#include <stdio.h>

int main()
{
    int i, n;
    printf("enter the value of n: \n");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        printf("enter the value at a[%d]: \n", i);
        scanf("%d", &a[i]);
    }
    int diff = a[0];
    for (i = 0; i < n; i++)
    {
        if (a[i] - i != diff)
        {
            while (diff < a[i] - i)
            {
                printf("missing element : %d\n", i + diff);
                diff++;
            }
        }
    }
    return 0;
}