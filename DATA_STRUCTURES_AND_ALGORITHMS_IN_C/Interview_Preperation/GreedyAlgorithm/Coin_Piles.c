#include <stdio.h>

int main()
{
    int A[] = {2,9,10,12,13,18};
    int minimum_coins(int A[], int n, int k);
    int ans = minimum_coins(A,6,6);
    printf("%d ", ans);


    return 0;
}

int minimum_coins(int A[], int n, int k)
{
    static int count = 0;

    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(A[j] > A[i])
            {
                int p = A[j] - (A[i] + k);
                if(p > 0)
                {
                count = count + p;
                A[j] = A[j] - p;
                }
            }
        }
    }

    return count;
}