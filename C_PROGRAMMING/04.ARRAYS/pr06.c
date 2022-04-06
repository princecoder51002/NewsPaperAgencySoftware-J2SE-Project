// write a program for number of days between 2 months

#include <stdio.h>

int main()
{
    int sm, n, em, i, sum = 0;
    printf("enter the value of n: \n");
    scanf("%d", &n);
    int days[n];
    for (i = 0; i < n; i++)
    {
        printf("enter the value at days[%d]: \n", i + 1);
        scanf("%d", &days[i + 1]);
    }

    printf("enter starting month and end month\n");
    scanf("%d%d", &sm, &em);
    for (i = sm; i <= em; i++)
    {
        printf("%d+", days[i]);
        sum = sum + days[i];
    }
    printf("\b=%d", sum);
    return 0;
}