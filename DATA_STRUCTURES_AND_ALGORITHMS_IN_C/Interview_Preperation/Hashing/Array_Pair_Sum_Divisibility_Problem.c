#include <stdio.h>
#include <stdbool.h>

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

    printf("Enter the no. with which u want to divide all the elements: \n");
    scanf("%d", &k);

    bool Pair_Sum(int A[], int n, int k);
    bool ans = Pair_Sum(A,n,k);

    printf(ans ? "true" : "false");


}

bool Pair_Sum(int A[], int n, int k)
{
     int hash[k];

     for(int i=0;i<k;i++)
     {
         hash[i] = 0;
     }

     for(int i=0;i<n;i++)
     {
         hash[(A[i] + k) %k]++; // to handle negative cases
     }

     if(hash[0] % 2 != 0) return false;

     for(int i=1;i<k;i++)
     {
         if(hash[i]!=hash[k-i])
         {
                 return false;
         }
     }

     return true;

}