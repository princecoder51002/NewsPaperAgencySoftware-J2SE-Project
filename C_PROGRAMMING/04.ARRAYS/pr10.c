// write a program to input/process/output of a 2-D array of m x n elements

#include <stdio.h>

int main()
{
    int r, c, h, t, sum = 0;
    printf("enter the value of hours and times : \n");
    scanf("%d%d", &h, &t);
    int a[h][t];
    for (r = 0; r < h; r++)
    {
        for (c = 0; c < t; c++)
        {
            printf("enter temperature at a[%d][%d]: \n", r, c);
            scanf("%d", &a[r][c]);
        }
    }
    printf("\noutput\n");
    for (r = 0; r < h; r++)
    {
        for (c = 0; c < t; c++)
        {
            printf("%d celsius ", a[r][c]);
            sum = sum + a[r][c];
        }
        printf("\n");
    }
    printf("\n average temperature : %d", sum / (r * c));
    return 0;
}