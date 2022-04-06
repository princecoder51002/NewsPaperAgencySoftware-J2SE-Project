#include <stdlib.h>
#include <stdio.h>

int main()
{

     int n, k;
    printf("Enter No. Of Elements: \n");
    scanf("%d", &n);

    int A[n];
    printf("Enter Elements: \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d", &A[i]);
    }

    printf("Enter the no. equals to sum u want: \n");
    scanf("%d", &k);

    int SubArrays_With_Sum(int A[], int n, int k);
    int ans = SubArrays_With_Sum(A,n,k);

    printf("Answer is %d", ans);

    return 0;
}

int SubArrays_With_Sum(int A[], int n, int k)
{
    int hash[100] = {0};

    int res =0;
    int curr_sum = 0;

    for(int i = 0;i<n;i++)
    {
        curr_sum  = curr_sum + A[i];

        if(curr_sum == k)
        res++;

        if(hash[curr_sum - k] > 0)
        {
            res+=hash[curr_sum - k];
            hash[curr_sum]++;
        }

        else 
        hash[curr_sum]++;
    }

    return res;
}