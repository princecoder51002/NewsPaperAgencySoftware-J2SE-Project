// write a program for palindrome of a number without arguements

#include <stdio.h>
void palindrome()
{
    int n, rev = 0, r, prince;
    printf("enter the value of n: \n");
    scanf("%d", &n);
    prince = n;
    while (n != 0)
    {
        r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }
    printf("reverse : %d\n", rev);
    if (prince == rev)
        printf("yes it is palindrome");
    else
        printf("it is not palindrome");
}
int main()
{
    void palindrome();
    palindrome();
    return 0;
}