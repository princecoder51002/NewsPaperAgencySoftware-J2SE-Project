// write a program for this output

// --->> $ 68 67 66 65 *
// --->> upto 4 rounds

#include <stdio.h>

int main()
{
    int r, c;
    for (r = 1; r <= 4; r++)
    {
        printf("$ ");
        for (c = 68; c >= 65; c--)
        {
            printf("%d ", c);
        }
        printf(" *\n");
    }
    return 0;
}