// write a program for sum of two complex numbers

#include <stdio.h>

struct sum
{
    int r;
    float i;
};
int main()
{
    struct sum num1, num2;
    printf("enter num1: \n");
    scanf("%d%f", &num1.r, &num1.i);
    printf("enter num2: \n");
    scanf("%d%f", &num2.r, &num2.i);
    int real = num1.r + num2.r;
    float imagionary = num1.i + num2.i;
    printf("%d_%f", real, imagionary);
    return 0;
}