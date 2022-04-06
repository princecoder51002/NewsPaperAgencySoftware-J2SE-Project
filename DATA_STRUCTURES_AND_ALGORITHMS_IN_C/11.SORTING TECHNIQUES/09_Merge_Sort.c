#include <stdio.h>
#include <math.h>

int main()
{

    int a[] = {11, 13, 7, 12, 16, 9, 24, 5, 10, 3, 45}, n = 11, i;

    // void Imergesort(int a[], int n);
    // Imergesort(a, n);

    void Rmergesort(int a[], int l, int h);
    Rmergesort(a, 0, n);

    for (i = 0; i < 11; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}

void merge(int a[], int l, int mid, int h)
{
    int i = l, j = mid + 1, k = l;

    int b[100];

    while (i <= mid && j <= h)
    {
        if (a[i] < a[j])
            b[k++] = a[i++];
        else
            b[k++] = a[j++];
    }

    for (; i <= mid; i++)
        b[k++] = a[i];

    for (; j <= h; j++)
        b[k++] = a[j];

    for (i = l; i <= h; i++)
        a[i] = b[i];
}

// void Imergesort(int a[], int n)
// {
//     int p, l, mid, i, h;

//     for (p = 2; p <= n; p = p * 2)
//     {
//         for (i = 0; i + p - 1 < n; i = i + p)
//         {
//             l = i;
//             h = i + p - 1;

//             mid = floor((l + h) / 2);
//             merge(a, l, mid, h);
//         }
//     }

//     if (p / 2 < n)
//         merge(a, 0, p / 2 - 1, n);
// }

void Rmergesort(int a[], int l, int h)
{
    if (l < h)
    {
        int mid = floor((l + h) / 2);
        Rmergesort(a, l, mid);
        Rmergesort(a, mid + 1, h);
        merge(a, l, mid, h);
    }
}
