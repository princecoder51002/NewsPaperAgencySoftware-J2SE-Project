// write a program for this output

// * * * 1
// * * 1 2
// * 1 2 3
// 1 2 3 4

#include <stdio.h>

int main()
{
    int r, c;
    for (r = 1; r <= 4; r++)
    {
        for (c = 4; c >= 1; c--)
        {
            if (c > r)
                printf("* ");
            else if (c == r)
                printf("%d ", c / r);
            else
                break;
        }
        if (r == 2)
            printf("%d ", r);
        else if (r == 3)
            printf("%d %d ", r - 1, r);
        else if (r == 4)
            printf("%d %d %d ", r - 2, r - 1, r);
        printf("\n");
    }
    return 0;
}

// best method by banglore computers

#include <stdio.h>

int main()
{
    int r, c, s;
    for (r = 1; r <= 4; r++)
    {
        for (s = 3; s >= r; s--)
        {
            printf("* ");
        }
        for (c = 1; c <= r; c++)
        {
            printf("%d ", c);
        }
        printf("\n");
    }

    return 0;
}