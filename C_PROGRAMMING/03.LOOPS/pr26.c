// write a program for this output

// * * * *
//  * * *
//   * *
//    *

#include <stdio.h>

int main()
{
    int r, c, s;
    for (r = 1; r <= 4; r++)
    {
        for (s = 1; s <= r; s++)
        {
            printf("  ");
        }
        for (c = r; c <= 4; c++)
        {
            printf("*   ");
        }
        printf("\n");
    }

    return 0;
}