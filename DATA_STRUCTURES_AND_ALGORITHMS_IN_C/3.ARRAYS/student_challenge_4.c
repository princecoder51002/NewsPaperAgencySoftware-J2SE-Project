// write a program for finding duplicates and count no. of duplicates in sorted array

#include <stdio.h>

int main()
{
    int i, n, j;
    printf("enter the value of n: \n");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        printf("enter the value at a[%d]: \n", i);
        scanf("%d", &a[i]);
    }
    int lastduplicate = 0, count = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] == a[i + 1] && a[i] != lastduplicate)
        {
            printf("duplicated element : %d\n", a[i]);
            lastduplicate = a[i];
        }
    }
    for (i = 0; i < n - 1; i++)
    {
        if (a[i] == a[i + 1])
        {
            j = i + 1;
            while (a[j] == a[i])
                j++;
            printf("%d is appearing %d times\n", a[i], j - i);
            i = j - 1;
        }
    }
    return 0;
}