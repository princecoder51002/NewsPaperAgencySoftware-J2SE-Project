#include <stdio.h>
#include <math.h>

int count  = 0;
int main()
{
    int A[] = {2,4,1,3,5};
    int n = 5;
    
    int Inversion_Count(int A[], int l, int h);
    int ans = Inversion_Count(A,0,n-1);

    printf("%d ", ans);

    return 0;
}

int Inversion_Count(int A[], int l, int h)
{
    int inv = 0;
    int Merge(int A[], int l, int mid, int h);
    if(l<h)
    {
        int mid = floor((l+h)/2);
        inv = inv + Inversion_Count(A,l,mid);
        inv = inv + Inversion_Count(A,mid+1,h);

        inv = inv + Merge(A,l,mid,h);
    }

    return inv;
}

int Merge(int A[], int l, int mid, int h)
{
    int i=l, j = mid+1, k=l;
    int b[100];
    int count = 0;

    while(i<=mid && j<=h)
    {
         if(A[i] < A[j])
         b[k++] = A[i++];

         else 
         {
             b[k++] = A[j++];
             count = count + (mid + 1 - i);
         }

    }

    for( ; i<=mid;i++)
    {
        b[k++] = A[i];
    }

    for( ; j<=h;j++)
    {
        b[k++] = A[j];
    }

    for(int p =l;p<=h;p++)
    {
        A[p] = b[p];
    }

    return count;
}

