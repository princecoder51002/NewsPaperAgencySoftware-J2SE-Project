#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    scanf("%d", &n);
    int a[n];
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    void insert(int a[], int n);
    // insert(a, 1);
    // insert(a, 2);
    // insert(a, 3);
    // insert(a, 4);
    // insert(a, 5);
    // insert(a, 6);
    // insert(a, 7);

    for (i = 1; i <= n; i++)
    {
        insert(a, i);
    }

    for (i = 1; i <= n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}

void insert(int a[], int n)
{
    int temp, i = n;
    temp = a[n];

    while (i > 1 && temp > a[i / 2])
    {
        a[i] = a[i / 2];
        i = i / 2;
    }
    a[i] = temp;
}