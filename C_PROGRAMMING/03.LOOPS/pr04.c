// program for square and cube of each value upto n

#include <stdio.h>

int main()
{
    int n, square, cube, m;
    printf("enter the value of n: \n");
    scanf("%d", &n);
    for (m = 1; m <= n; m++)
    {
        square = m * m;
        cube = m * m * m;
        printf("square of %d is: %d\n", m, square);
        printf("cube of %d is: %d\n", m, cube);
    }

    return 0;
}
