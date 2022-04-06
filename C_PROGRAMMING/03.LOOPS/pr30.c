// write a program to print and count palindrome numbers from 11 to n

#include <stdio.h>

int main()
{
    int n, m, rev = 0, r, prince, count = 0;
    printf("enter the value of n: \n");
    scanf("%d", &n);
    for (m = 11; m <= n; m++)
    {
        prince = m;
        rev = 0;

        while (prince != 0)
        {
            r = prince % 10;
            rev = rev * 10 + r;
            prince = prince / 10;
        }
        if (rev == m)
        {
            printf("palindrome : %d\n", m);
            count++;
        }
    }
    printf("count of palindrome : %d", count);
    return 0;
}