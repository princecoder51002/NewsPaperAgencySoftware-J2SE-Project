// write a program for reverse, check palindrome  , sum of digits , count of digits

#include <stdio.h>

int main()
{
    int n, rev = 0, r, photo, sum = 0, count = 0;
    printf("enter the value of n: \n");
    scanf("%d", &n);
    photo = n;
    while (n != 0)
    {
        r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
        sum = sum + r;
        count++;
    }
    printf("\n reverse = %d\n", rev);
    if (rev == photo)
        printf("palindrome\n");
    else
        printf("not palindrome\n");
    printf("sum of all digits : %d\n", sum);
    printf("count of all digits: %d\n", count);

    return 0;
}