// write a program for outcome this
        
//---->> 1   4
//---->> 2   3   
//---->> 3   2
//---->> 4   1

#include <stdio.h>

int main()
{
    int i, j;
    for (i = 1, j = 4; i <= 4, j >= 1; i++, j--)
    {
        printf("%d\t%d\n", i, j);
    }
    return 0;
}