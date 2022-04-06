// write a program to count number of odd and even digits a number contain

#include <stdio.h>

int main()
{
    int n, r, count1 = 0, count2 = 0;
    printf("enter the value of n: \n");
    scanf("%d", &n);
    while (n != 0)
    {
        r = n % 10;
        n = n / 10;
        if (r % 2 == 0)
            count1++;
        else
            count2++;
    }
    printf("count of even: %d\n", count1);
    printf("count of odd: %d\n", count2);
    return 0;
}