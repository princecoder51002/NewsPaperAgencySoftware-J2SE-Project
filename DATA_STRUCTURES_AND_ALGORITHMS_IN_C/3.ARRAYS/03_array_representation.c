// program for representation of 2-d array 

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 0, 6, 5}};
    int *b[3];
    int i, j;
    b[0] = (int *)malloc(4 * sizeof(int)); // decleration by array of pointers
    b[1] = (int *)malloc(4 * sizeof(int));
    b[2] = (int *)malloc(4 * sizeof(int));
    int **c;
    c = (int **)malloc(3 * sizeof(int)); // decleration by double pointers
    c[0] = (int *)malloc(4 * sizeof(int));
    c[1] = (int *)malloc(4 * sizeof(int));
    c[2] = (int *)malloc(4 * sizeof(int));

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d", b[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}