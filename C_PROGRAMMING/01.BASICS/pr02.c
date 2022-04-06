// input the marks of physics , chemistry and maths and find out the total and percentage

#include <stdio.h>

int main()
{
    float p, c, m;
    printf("enter the marks of physics,chemistry and maths: \n");
    scanf("%f%f%f", &p, &c, &m);
    printf("total marks = %f", p + c + m);
    printf("percentage = %f\n", (p + c + m) / 300 * 100);
    return 0;
}