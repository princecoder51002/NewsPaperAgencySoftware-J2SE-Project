#include <stdio.h>

int main()
{

    int n;
    printf("Enter the value of n: \n");
    scanf("%d", &n);

    int keyboard(int n);
    int ans = keyboard(n);

    printf("Output: %d", ans);

    return 0;
}

int keyboard(int n)
{

    int max=0;
    if(n<7)
    return n;

    else 
    {
        int b;

        for(b = n-3; b>=1;b--)
        {
            int curr = (n-b-1)*keyboard(b);

            if(curr > max)
            max = curr;
        }
    }

    return max;
}