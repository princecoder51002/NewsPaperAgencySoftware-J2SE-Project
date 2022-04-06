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

    // int Basic_Longest_SubArrays_With_Sum(int A[], int n, int k);
    // int ans = Basic_Longest_SubArrays_With_Sum(A,n,k);

    int Advanced_Longest_SubArrays_With_Sum(int A[], int n, int k);
    int ans1 = Advanced_Longest_SubArrays_With_Sum(A,n,k);

    printf("Answer is %d", ans1);

    return 0;
}

int Basic_Longest_SubArrays_With_Sum(int A[], int n, int k)
{
    int max_length = 0;
    for(int i=0;i<n-1;i++)
    {
        int sum = 0;
        for(int j=i;j<n;j++)
        {
            sum = sum + A[j];
            if(sum % k == 0)
            {
            int length = j - i + 1;

            if(max_length < length)
            max_length = length;
            }
        }
    }

    return max_length;
}

int Advanced_Longest_SubArrays_With_Sum(int A[], int n, int k)
{
    int mod_arr[n];
    int max = 0;
    int ind;

    int curr_sum = 0;

    for(int i=0; i<n; i++)
    {
        curr_sum = curr_sum + A[i];
       mod_arr[i] = (((curr_sum % k) + k) % k);
    }

    for(int i=0; i<n;i++)
    {
        if(mod_arr[i] == 0)
        max = i + 1;

        else 
        {
            for(int j = n-1;j>=0;j--)
            {
                if(mod_arr[i] == mod_arr[j])
                {
                ind = j - i;
                break;
                }
            }
        }

        if(ind > max)
        max = ind;
    }

    return max;
}