// write a program for this output

// A B C D E
// A B C D
// A B C
// A B
// A

#include <stdio.h>

int main()
{
    int r, c;
    for (r = 69; r >= 65; r--)
    {
        for (c = 65; c <= r; c++)
        {
            printf("%c ", c);
        }
        printf("\n");
    }
    return 0;
}