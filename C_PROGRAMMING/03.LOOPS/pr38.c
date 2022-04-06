// write a program for armstrong number

#include <stdio.h>

int main()
{
    int n, m, sum = 0, r, prince;
    printf("enter the value of n: \n");
    scanf("%d", &n);
    prince = n;
    while (n != 0)
    {
        r = n % 10;
        n = n / 10;
        sum = sum + (r * r * r);
    }
    if (sum == prince)
        printf("yes it is armstrong number\n");
    else
        printf("it is not armstrong number\n");

    return 0;
}

// alternative way for this program

#include <stdio.h>
#include <math.h>

int main()
{
    int n, m, sum = 0, r, prince;
    printf("enter the value of n: \n");
    scanf("%d", &n);
    prince = n;
    while (n != 0)
    {
        r = n % 10;
        int pw = ceil(pow(r, 3)); // ceil will give upper side int value
        sum = sum + pw;
        n = n / 10;
    }
    if (sum == prince)
        printf("yes it is armstrong number\n");
    else
        printf("it is not armstrong number\n");

    return 0;
}