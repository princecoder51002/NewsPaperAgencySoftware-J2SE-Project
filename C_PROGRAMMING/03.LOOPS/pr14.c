// write a program for this output

// 1 2 3 4
// 1 2 3
// 1 2
// 1

#include <stdio.h>

int main()
{
    int r, c;
    for (r = 4; r >= 1; r--)
    {
        for (c = 1; c <= r; c++)
        {
            printf("%d ", c);
        }
        printf("\n");
    }
    return 0;
}