// write a program for difference between the heights of two persons

#include <stdio.h>

struct height
{
    int f;
    int i;
};
int main()
{
    struct height prince, saksham, diff;
    printf("enter the height of prince: \n");
    scanf("%d%d", &prince.f, &prince.i);
    printf("enter the height of saksham: \n");
    scanf("%d%d", &saksham.f, &saksham.i);
    int df = abs((saksham.f * 12 + saksham.i) - (prince.f * 12 + prince.i));
    diff.f = df / 12;
    diff.i = df % 12;
    printf("\n difference: %d_%d", diff.f, diff.i);
    return 0;
}