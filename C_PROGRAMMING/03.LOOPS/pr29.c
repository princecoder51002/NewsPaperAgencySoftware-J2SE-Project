// check prime number using loops
// actually its a more efficient method

#include <stdio.h>

int main()
{
    int n, d, jasus = 1;
    printf("enter the value of n: \n");
    scanf("%d", &n);
    for (d = 2; d < n; d++)
    {
        if (n % d == 0)
        {
            jasus = 0;
            break;
        }
    }
    if (jasus == 1)
        printf("its a prime number");
    else
        printf("its not a prime number");
    return 0;
}