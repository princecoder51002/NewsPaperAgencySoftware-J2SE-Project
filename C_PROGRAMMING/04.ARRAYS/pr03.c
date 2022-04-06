// write a program to input the price of n products in array and find total and average price

#include <stdio.h>

int main()
{
    int n, i;
    float sum = 0;
    printf("enter the value of n: \n");
    scanf("%d", &n);
    int s[n];
    for (i = 0; i < n; i++)
    {
        printf("enter the value at s[%d]: ", i);
        scanf("%d", &s[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf(" the price of %d product:%d \n", i + 1, s[i]);
        sum = sum + s[i];
    }
    printf("total amount : %f", sum);
    printf("average : %f", sum / 3);
    return 0;
}