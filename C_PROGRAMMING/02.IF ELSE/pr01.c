// input radius if it is <10 then calculate area of circle , else calculate volume of cylinder

#include <stdio.h>

int main()
{
    float r, h, ac, vc;
    printf("enter the value of r and h: \n");
    scanf("%f%f", &r, &h);
    ac = 3.14 * r * r;
    vc = 3.14 * r * r * h;
    if (r < 10)
        printf("area of circle: %f\n", ac);
    else
        printf("volume of cylinder : %f\n", vc);
    return 0;
}