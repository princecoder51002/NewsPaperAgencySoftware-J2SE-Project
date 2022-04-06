#include <stdio.h>

int main()
{
    int A[] = {5, 4, 1, 3, 3, 5, 1};
    int res = 0;

    for(int i = 0;i<7;i++)
    {
       res = res ^ A[i];
    }

    printf("%d ", res);

    return 0;
}