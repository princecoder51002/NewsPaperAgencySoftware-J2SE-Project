// write a program for palindrome number using do while

#include <stdio.h>

int main()
{
    int n, r, m, prince, rev = 0;
    printf("enter the value of n: \n");
    scanf("%d", &n);
    prince = n;
    do
    {
        r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    } while (n != 0);
    printf("reverse = %d\n", rev);
    if (rev == prince)
        printf("palindrome number");
    else
        printf("not a palindrome number");
    return 0;
}