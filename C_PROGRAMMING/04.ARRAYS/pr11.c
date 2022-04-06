// input a square matrix(mxn) and print diagonal elements

#include <stdio.h>

int main()
{
    int r, c, m, n;
    printf("enter the value of m and n: \n");
    scanf("%d%d", &m, &n);
    int a[m][n];
    for (r = 0; r < m; r++)
    {
        for (c = 0; c < n; c++)
        {
            printf("enter the value at a[%d][%d]: \n", r, c);
            scanf("%d", &a[r][c]);
        }
    }
    for (r = 0; r < m; r++)
    {
        for (c = 0; c < n; c++)
        {
            if (r == c)
                printf("%d ", a[r][c]);
            else if (r != c)
                printf("0 ");
                }
        printf("\n");
    }
    return 0;
}