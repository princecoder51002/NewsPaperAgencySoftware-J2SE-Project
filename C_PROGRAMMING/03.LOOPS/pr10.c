// write a program for this output

// --->> 1 0 1 0 1
// --->> upto 5 rounds

#include <stdio.h>

int main()
{
    int r, c = 1;
    for (r = 1; r <= 5; r++)
    {
        for (c = 1; c <= 5; c++)
        {
            printf("%d ", c % 2);
        }
        printf("\n");
    }
    return 0;
}