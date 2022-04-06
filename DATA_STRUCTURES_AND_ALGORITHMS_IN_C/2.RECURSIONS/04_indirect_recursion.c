#include <stdio.h>

void funb(int n); // prototype declared bcz it must be declared first bcz compiler goes from top to bottom
void funa(int n)
{
    if (n > 0)
    {
        printf("%d ", n);
        funb(n - 1);
    }
}
void funb(int n)
{
    if (n > 0)
    {
        printf("%d ", n);
        funa(n / 2);
    }
}
int main()
{
    funa(20);
    return 0;
}