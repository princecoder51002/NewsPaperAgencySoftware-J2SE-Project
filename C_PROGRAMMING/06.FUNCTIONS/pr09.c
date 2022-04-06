// write a function : dototal() with 3 subject marks as arguements and return total to main then pass total from main function
// to function: do per(), to calculate percentage and return 'per' to main and show on screen

#include <stdio.h>

int main()
{
    int m, p, b;
    printf("enter the value of m,b,p: \n");
    scanf("%d%d%d", &m, &p, &b);
    int dototal(int maths, int physics, int biology);
    int tot = dototal(m, p, b);
    printf("total marks : %d", tot);
    float doper(float total);
    float per = doper(tot);
    printf("percentage = %f", per);
    return 0;
}
int dototal(int maths, int physics, int biology)
{
    int total;
    total = maths + physics + biology;
    return (total);
}
float doper(float total)
{

    float per = (total / 300) * 100;
    return (per);
}