// program for area of square and circle in a program

#include <stdio.h>

int main()
{
    float s, r;
    printf("enter the measurement of side: \n");
    scanf("%f", &s);
    printf("enter the measurement of radius: \n");
    scanf("%f", &r);
    printf("area of square = %f\n", s * s);
    printf("area of circle = %f\n", 3.14 * r * r);
    return 0;
}
