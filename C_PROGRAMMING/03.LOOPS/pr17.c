// write a program for this output

// 1
// 2 1
// 3 2 1
// 4 3 2 1

#include <stdio.h>

int main()
{
    int r, c;
    for (r = 1; r <= 4; r++)
    {
        for (c = r; c >= 1; c--)
        {
            printf("%d ", c);
        }
        printf("\n");
    }
    return 0;
}