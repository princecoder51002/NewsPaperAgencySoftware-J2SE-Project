// write a program for greatest element of an array without arguements

#include <stdio.h>
void gm()
{
    int n, i, max;
    printf("enter the value of n: \n");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        printf("enter the value at a[%d]: \n", i);
        scanf("%d", &a[i]);
    }
        max = a[0];
        for (i = 0; i < n; i++)
        {
            if (max < a[i])
                max = a[i];
        }
        printf("greatest element : %d\n", max);
    
}
int main()
{
    void gm();
    gm();
    return 0;
}