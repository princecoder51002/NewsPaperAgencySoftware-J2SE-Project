// input price of laptop , mobile and book and find total price and avreage price

#include <stdio.h>

int main()
{
    float l, m, b;
    printf("input price of laptop: \n");
    scanf("%f", &l);
    printf("input price of mobile: \n");
    scanf("%f", &m);
    printf("input price of book: \n");
    scanf("%f", &b);
    printf("total price = %f\n", l + m + b);
    printf("average price = %f\n", (l + m + b) / 3);
    return 0;
}