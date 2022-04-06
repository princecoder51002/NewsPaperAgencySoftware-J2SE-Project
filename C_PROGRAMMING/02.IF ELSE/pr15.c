// write a program for greatest of 3 numbers using nested if

#include <stdio.h>

int main()
{
    int a, b, c;
    printf("enter the value of a,b,c: \n");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b)
    {
        if (a > c)
            printf("a is greatest");
        else
            printf("c is greatest");
    }
    else if (b > c)
        printf("b is greatest");
    else
        printf("c is greatest");
    return 0;
}

// repeat this program using conditional operator in nested if

#include <stdio.h>

int main()
{
    int a, b, c;
    printf("enter the value of a,b,c: \n");
    scanf("%d%d%d", &a, &b, &c);
    (a > b ? a > c ? printf("a is greatest") : printf("c is greatest") : b > c ? printf("b is greatest") : printf("c is greatest"));
    return 0;
}