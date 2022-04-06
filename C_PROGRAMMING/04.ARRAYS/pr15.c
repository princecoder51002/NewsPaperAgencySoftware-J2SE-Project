// write a program for union of elements in arrays

#include <stdio.h>

int main()
{
    int n, i, j, prince, m;
    printf("enter the value of n and m: \n");
    scanf("%d%d", &n, &m);
    int a[n], b[m];
    for (i = 0; i < n; i++)
    {
        printf("enter the value at a[%d]: \n", i);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < m; i++)
    {
        printf("enter the value at b[%d]: \n", i);
        scanf("%d", &b[i]);
    }
    if (m > n)
    {
        for (i = 0; i < n; i++)
        {
            printf("%d\n", a[i]);
        }
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (b[i] == a[j])
                {
                    prince = 1;
                    break;
                }
                else if (b[i] != a[j])
                    
                prince = 0;
            }
            if (prince == 1)
                continue;
            else if (prince == 0)
                printf("%d\n", b[i]);
        }
    }

    return 0;
}