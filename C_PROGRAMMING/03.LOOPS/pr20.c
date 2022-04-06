// write a program for this output

// 1
// 2 3
// 4 5 6
// 7 8 9 10

#include <stdio.h>

int main()
{
    int r, c, k = 1;
    for (r = 1; r <= 4; r++)
    {
        for (c = 1; c <= r; c++)
        {
            printf("%d ", k);
            k++;
        }
        printf("\n");
    }
    return 0;
}