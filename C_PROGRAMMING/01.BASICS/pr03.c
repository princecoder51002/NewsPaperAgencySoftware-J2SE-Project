// program for volume of cylinder

#include <stdio.h>

int main()
{
    float v, r, h;
    printf("enter the value of radius: \n");
    scanf("%f", &r);
    printf("enter the value of height: \n");
    scanf("%f", &h);
    printf("volume of cylinder = %f", 3.14 * r * r * h);

    return 0;
}