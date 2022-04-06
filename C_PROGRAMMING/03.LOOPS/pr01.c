// program for billing for products

#include <stdio.h>

int main()
{
    int n, c, price, sum = 0;
    printf("enter number of products: \n");
    scanf("%d", &n);
    for (c = 1; c <= n; c++)
    {
        printf("enter the price of products %d: \n", c);
        scanf("%d", &price);
        sum = sum + price;
    }
    printf("total bill = %d", sum);
    return 0;
}