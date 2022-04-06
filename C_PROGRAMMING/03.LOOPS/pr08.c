// write a program for this output

// * A B C D *
// --->> 4 times

#include <stdio.h>

int main()
{
    int r, c;

    for (r = 1; r <= 4; r++)
    {
        printf("* ");
        for (c = 65; c <= 68; c++)
        {
            printf("%c ", c);
        }
        printf("*\n");
    }
    return 0;
}