#include <stdio.h>

int main()
{
    char arr[] = {'T', 'T', 'P', 'P', 'T', 'P'};

    int Catch(char A[], int n, int k);
    int ans = Catch(arr,6,2);

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

int Catch(char A[], int n, int k)
{
    int ans = 0;

    for(int i = 0;i<n;i++)
    {
        int flag = 0;
        if(A[i] == 'P')
        {
            int j = max(0,i - k);
            for(int k = j; k<i;k++)
            {
                if(A[k] == 'T')
                {
                    A[k] == 'C';
                    ans++;
                    flag = 1;
                    break;
                }
            }

            if(flag == 0)
            {
                int p = min(i+1,n-1);
                for(int k = i+1; k<=p; k++)
                {
                    if(A[k] == 'T')
                    {
                        A[k] == 'C';
                        ans++;
                        flag = 1;
                        break;
                    }
                }
            }
        }
    }

    return ans;
}