#include <stdio.h>

struct node 
{
    int data;
    struct node *next;
}*s1=NULL,*q2=NULL;

int main()
{
    int A[] = {1,2,3,1,4,5,2,3,6};
    int n = 9;
    int k = 3;

    void Maximum_Of_All_Sub_Arrays(int A[], int n, int k);
    Maximum_Of_All_Sub_Arrays(A,n,k);

    return 0;
}

void Maximum_Of_All_Sub_Arrays(int A[], int n, int k)
{
    for(int i = 0;i<=n-k;i++)
    {
        int max = A[i];
        for(int j = i+1; j<i+k;j++)
        {
             if(A[j] > max)
             max = A[j];
        }

        printf("%d ", max);
    }
}

