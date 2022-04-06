// write a program for greatest of 2 no.s with arguements

#include <stdio.h>

int main()
{
    int Aa, Bb;
    printf("enter the value of Aa and Bb: \n");
    scanf("%d%d", &Aa, &Bb);
    void N(int a, int b);
    N(Aa, Bb);

    return 0;
}
void N(int a, int b)
{
    if (a > b)
        printf("a is greatest");
    else
        printf("b is greatest");
}