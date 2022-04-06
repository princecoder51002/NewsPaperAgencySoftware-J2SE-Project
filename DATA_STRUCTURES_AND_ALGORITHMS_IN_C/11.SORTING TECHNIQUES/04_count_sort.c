#include <stdio.h>

int main()
{

    int i;
    int a[] = {6, 3, 9, 10, 15, 6, 8, 12, 3, 6};

    void countsort(int a[], int n);
    countsort(a, 10);

    for (i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}

void countsort(int a[], int n)
{
    int max, i, j;
    int *c;

    max = a[0];

    for (i = 0; i < n; i++)
    {
        if (max < a[i])
            max = a[i];
    }

    c = (int *)malloc(sizeof(int) * (max + 1));

    for (i = 0; i < max + 1; i++)
    {
        c[i] = 0;
    }

    for (i = 0; i < n; i++)
    {
        c[a[i]]++;
    }

    i = 0, j = 0;

    while (i < max + 1)
    {
        if (c[i] > 0)
        {
            a[j++] = i;
            c[i]--;
        }
        else
            i++;
    }
}