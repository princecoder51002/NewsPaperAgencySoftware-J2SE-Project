// write a program for this output

// 1 1 1 1 1
// 0 0 0 0 0
// 1 1 1 1 1
// 0 0 0 0 0

#include <stdio.h>

int main()
{
    int r, c;
    for (r = 1; r <= 4; r++)
    {
        for (c = 1; c <= 5; c++)
        {
            printf("%d ", r % 2);
        }
        printf("\n");
    }
    return 0;
}