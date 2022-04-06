// write a program for this output

// 4 3 2 1
// 4 3 2
// 4 3
// 4

#include <stdio.h>

int main()
{
    int r, c;
    for (r = 1; r <= 4; r++)
    {
        for (c = 4; c >= r; c--)
        {
            printf("%d ", c);
        }
        printf("\n");
    }
    return 0;
}