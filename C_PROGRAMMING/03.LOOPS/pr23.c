// write a program for this output

//       1
//     1 2
//   1 2 3
// 1 2 3 4

#include <stdio.h>

int main()
{
    int r, c, s;
    for (r = 1; r <= 4; r++)
    {
        for (s = 3; s >= r; s--)
        {
            printf("  ");
        }
        for (c = 1; c <= r; c++)
        {
            printf("%d ", c);
        }
        printf("\n");
    }

    return 0;
}
