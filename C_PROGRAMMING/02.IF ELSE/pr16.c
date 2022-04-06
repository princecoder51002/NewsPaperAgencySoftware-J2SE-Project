// write a program for greatest of four numbers using nested if

#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("enter the value of a,b,c,d: \n");
    scanf("%d%d%d%d", &a, &b, &c, &d);
    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
                printf("a is greatest");
            else
                printf("d is greatest");
        }
        else if (c > d)
            printf("c is greatest");
        else
            printf("d is greatest");
    }
    else if (b > c)
    {
        if (b > d)
            printf("b is greatest");
        else
            printf("d is greatest");
    }
    else if (c > d)
        printf("c is greatest");
    else
        printf("d is greatest");

    return 0;
}

// repeat this program using conditional operator in nested if

#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("enter the value of a,b,c,d: \n");
    scanf("%d%d%d%d", &a, &b, &c, &d);

    (a > b ? a > c ? a > d ? printf("a is greatest") : printf("d is greatest") : c > d ? printf("c is greatest") : printf("d is greatest") : b > c ? b > d ? printf("b is greatest") : printf("d is greatest") : c > d ? printf("c is greatest") : printf("d is greatest"));
    return 0;
}