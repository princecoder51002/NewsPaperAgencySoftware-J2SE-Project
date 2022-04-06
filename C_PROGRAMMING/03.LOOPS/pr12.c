// write a program for this output

#include <stdio.h>

int main()
{
    int r, c;
    for (r = 1; r <= 4; r++)
    {
        for (c = 1; c <= 5; c++)
        {
            if (c > 1 && c < 5)
                printf("* ");
            else
                printf("%d ", c);
        }
        printf("\n");
    }
    return 0;
}