// write a program for multiplication of two matrices of order mxn

#include <stdio.h>

int main()
{
    int r, c, k, ra, ca, rb, cb, sum;
    printf("enter the order of matrix a[][]: \n");
    scanf("%d%d", &ra, &ca);
    printf("enter the order of matrix b[][]: \n");
    scanf("%d%d", &rb, &cb);
    if (ca != rb)
    {
        printf("invalid order");
    }
    else
    {
        int a[ra][ca], b[rb][cb], ab[ra][cb];
        for (r = 0; r < ra; r++)
        {
            for (c = 0; c < ca; c++)
            {
                printf("enter the value at a[%d][%d]: \n", r, c);
                scanf("%d", &a[r][c]);
            }
        }
        for (r = 0; r < rb; r++)
        {
            for (c = 0; c < cb; c++)
            {
                printf("enter the value at b[%d][%d]: \n", r, c);
                scanf("%d", &b[r][c]);
            }
        }
        for (r = 0; r < ra; r++)
        {
            for (c = 0; c < cb; c++)
            {
                sum = 0;
                for (k = 0; k < ca; k++)
                {
                    sum = sum + a[r][k] * b[k][c];
                }
                ab[r][c] = sum;
            }
        }
        printf("\n multiplied matrix: \n");
        for (r = 0; r < ra; r++)
        {
            for (c = 0; c < cb; c++)
            {
                printf("%d ", ab[r][c]);
            }
            printf("\n");
        }
    }
    return 0;
}