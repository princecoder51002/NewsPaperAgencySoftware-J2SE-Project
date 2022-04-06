#include <stdio.h>

int main()
{
    int A[] = {4,7,8,8,8,9};
    int minimize(int A[], int n, int k);
    int ans = minimize(A,6,6);

    printf("%d ", ans);

}

int max(int x, int y)
{
    return x > y ? x : y;
}

int min(int x, int y)
{
    return x > y ? y : x;
}

int minimize(int A[], int n, int k)
{
    int smallest = A[0] + k;
    int largest = A[n-1] - k;
    int mi, ma, m;
    int ans = A[n-1] - A[0];

    for(int i=1;i<n;i++)
    {
       mi = min(smallest,A[i] - k);
       ma = max(largest,A[i-1] + k);

       if(mi<0) continue;
       ans = min(ans, ma-mi);

    }

    return ans;
}