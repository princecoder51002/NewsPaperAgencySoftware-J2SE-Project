#include <stdio.h>
#include <math.h>

int main()
{
    int A[] = {5, 4, 1, 3, 3, 5, 1, 2};
    int res = 0;

    for(int i = 0;i<8;i++)
    {
       res = res ^ A[i];
    }

    int pos = (res & ~(res - 1));
    int temp = res;

    int b[10] = {0}, c[10] = {0};

    int mask = 1 << (pos-1);
    
    for(int i = 0 ; i<8;i++)
    {
        if((A[i] & mask))
        b[i] = A[i];

        else 
        c[i] = A[i];
    }

    int ans1 = 0, ans2 = 0;

    for(int i=0;i<10;i++)
    {
       ans1 = ans1 ^ res ^ c[i];
       res=0;
    }

    for(int i=0;i<10;i++)
    {
       ans2 = ans2 ^ temp ^ b[i];
       temp=0;
    }
    
    printf("%d %d", ans1, ans2);

    return 0;
}