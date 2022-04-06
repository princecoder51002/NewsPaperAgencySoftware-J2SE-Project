// write a program for volume of cylinder without arguements

#include <stdio.h>
void arc()
{
    int r, h, a;
    printf("enter the value of r and h: \n");
    scanf("%d%d", &r, &h);
    a = 3.14 * r * r * h;
    printf("area of cylinder : %d", a);
}
int main()
{
    void arc();
    arc();
    return 0;
}