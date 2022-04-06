// program to check whether the no. is negative or positive

#include <stdio.h>

int main()
{
    int n;
    printf("enter the value of n: \n");
    scanf("%d", &n);
    if (n > 0)
        printf("number is positive");
    else
        printf("number is negaive");
    return 0;
}