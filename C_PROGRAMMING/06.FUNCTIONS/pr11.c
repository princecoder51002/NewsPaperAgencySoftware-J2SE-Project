// program for passing array as arguement

#include <stdio.h>

int main()
{
    int n, i;
    printf("enter the value of n: \n");
    scanf("%d", &n);
    int marks[n];
    for (i = 0; i < n; i++)
    {
        printf("enter the value at marks[%d]: \n", i);
        scanf("%d", &marks[i]);
    }
    void grace(int *p, int n);
    grace(&marks[0], n);
    printf("\n after grace \n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", marks[i]);
    }

    return 0;
}
void grace(int *p, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (*(p + i) < 50)
            *(p + i) = 50;
    }
}