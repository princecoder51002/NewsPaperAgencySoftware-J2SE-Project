#include <stdio.h>

int main()
{
    int P[] = {20,10,40,30};
    int D[] = {4,1,1,1};

    int Maximum_Profit(int A[], int B[], int n, int k);
    int ans = Maximum_Profit(P,D,4,2);

    printf("%d ", ans);

    return 0;
}

int swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int Maximum_Profit(int A[], int B[], int n, int k)
{
     int profit = 0;

     for(int i = 0;i<n-1;i++)
     {
         for(int j = i;j < n;j++)
         {
             if(A[j] > A[i])
             {
                 swap(&A[j], &A[i]);
                 swap(&B[j], &B[i]);
             }
         }
     }

     for(int i =0;i<n;i++)
     {
         static int j=0;
         if(B[i] > j && j<k)
         {
             profit = profit + A[i];
             j++;
         }
     }

     return profit;
}