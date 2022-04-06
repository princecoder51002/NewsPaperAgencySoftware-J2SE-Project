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

    for (i = 1; i <= n; i++)
    {
        insert(a, i);
    }

    int delete (int a[], int n);

    // printf("deleted value is: %d\n", delete(a,n));
    // printf("deleted value is: %d\n", delete(a,n-1));
    // printf("deleted value is: %d\n", delete(a,n-2));
    // printf("deleted value is: %d\n", delete(a,n-3));
    // printf("deleted value is: %d\n", delete(a,n-4));
    // printf("deleted value is: %d\n", delete(a,n-5));
    // printf("deleted value is: %d\n", delete(a,n-6));

    for (i = n; i >= 1; i--)
    {
        delete (a, i);
    }

    printf("sorted heap we get is: \n");

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

int delete (int a[], int n)
{
    int i, j, x;
    x = a[1];
    a[1] = a[n];
    a[n] = x;
    i = 1;
    j = i * 2;

    while (j < n - 1)
    {
        if (a[j + 1] > a[j])
            j = j + 1;
        if (a[i] < a[j])
        {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i = j;
            j = 2 * j;
        }
        else
            break;
    }
    return x;
}