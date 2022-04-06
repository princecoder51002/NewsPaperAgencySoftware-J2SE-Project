// write a program for greatest of five numbers using nested if

#include <stdio.h>

int main()
{
    int a, b, c, d, e;
    printf("enter the value of a,b,c,d,e: \n");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                if (a > e)
                    printf("a is greatest");
                else
                    printf("e is greatest");
            }
            else if (d > e)
                printf("d is greatest");
            else
                printf("e is greatest");
        }
        else if (c > d)
        {
            if (c > e)
                printf("c is greatest");
            else
                printf("e is greatest");
        }
        else if (d > e)
            printf("d is greatest");
        else
            printf("e is greatest");
    }
    else if (b > c)
    {
        if (b > d)
        {
            if (b > e)
                printf("b is greatest");
            else
                printf("e is greatest");
        }
        else if (d > e)
            printf("d is greatest");
        else
            printf("e is greatest");
    }
    else if (c > d)
    {
        if (c > e)
            printf("c is greatest");
        else
            printf("e is greatest");
    }
    else if (d > e)
        printf("d is greatest");
    else
        printf("e is greatest");
    return 0;
}

// repeat this program using conditional operators in nested if

#include <stdio.h>

int main()
{
    int a, b, c, d, e;
    printf("enter the value of a,b,c,d,e: \n");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    (a > b ? a > c ? a > d ? a > e ? printf("a is greatest") : printf("e is greatest") : d > e ? printf("d is greatest") : printf("e is greatest") : c > d ? c > e ? printf("c is greatest") : printf("e is greatest") : d > e ? printf("d is greatest") : printf("e is greatest") : b > c ? b > d ? b > e ? printf("b is greatest") : printf("e is greatest") : d > e ? printf("d is greatest") : printf("e is greatest") : c > d ? c > e ? printf("c is greatest") : printf("e is greatest") : d > e ? printf("d is greatest") : printf("e is greatest"));
    return 0;
}