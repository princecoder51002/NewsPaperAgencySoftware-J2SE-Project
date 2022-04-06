#include <stdio.h>

int main()
{
    int n = 6;
    int gallery[] = {2,3,4,-1,2,0,0,-1,0};

    int Sprinkler(int A[], int n);
    int ans = Sprinkler(gallery,9);

    printf("%d ", ans);

    return 0;
}

int max(int x, int y)
{
    return x > y ? x : y;
}

int min(int x, int y)
{
    return x > y ? y : x;
}

int Sprinkler(int A[], int n)
{
    for(int i = 0;i<n;i++)
    {
        if(A[i] != -1 && A[i] != 0)
        {
            int m;
            int p = max(A[i], i + A[i]);
            if(i - A[i] < 0)
            m = A[i];
            else 
            m = min(A[i],i - A[i]);

            for(int j = i; j<=p;j++)
            {
                 A[j] = 0;
            }

            for(int k = m; k>=0;k--)
            {
                A[k] = 0;
            }
        }
    }

    for(int i = 0;i<n;i++)
    {
        if(A[i] != 0)
        return -1;
    }

    return 1;
}