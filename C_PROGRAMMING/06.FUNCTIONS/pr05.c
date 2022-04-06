// write a program for volume of cylinder and cone with arguements

#include <stdio.h>

int main()
{
    float ra, he;
    printf("enter the value of ra and he: \n");
    scanf("%f%f", &ra, &he);
    float cylinder(float r, float h);
    float v = cylinder(ra, he);
    float cone(float r, float h);
    float m = cone(ra, he);
    printf("volume of cylinder = %f\n", v);
    printf("volume of cone = %f\n", m);
    return 0;
}
float cylinder(float r, float h)
{
    int v;
    v = 3.14 * r * r * h;
    return (v);
}
float cone(float r, float h)
{
    int m;
    m = (3.14 * r * r * h) / 3;
    return (m);
}