// program for volume of cone

#include <stdio.h>

int main()
{
    float v, r, h;
    printf("enter the radius of cone: \n");
    scanf("%f", &r);
    printf("enter the radius of height: \n");
    scanf("%f", &h);
    printf("volume of cone = %f", 3.14 * r * r * h / 3);
    return 0;
}