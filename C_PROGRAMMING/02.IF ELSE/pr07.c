// program to check number is positive , negative or zero

#include <stdio.h>

int main()
{
    int a;
    printf("enter the value of a: \n");
    scanf("%d", &a);
    if (a > 0)
        printf("number is positive");
    else if (a == 0)
        printf("number is zero");
    else
        printf("number is negaive");
    return 0;
}