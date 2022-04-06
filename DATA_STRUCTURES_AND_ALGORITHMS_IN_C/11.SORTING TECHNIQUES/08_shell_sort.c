#include <stdio.h>

int main()
{

    int a[] = {11, 13, 7, 12, 16, 9, 24, 5, 10, 3}, n = 10, i;
    void shellsort(int a[], int n);
    shellsort(a, n);

    for (i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}

void shellsort(int a[], int n)
{
    int gap, i, j;

    for (gap = n / 2; gap >= 1; gap /= 2)
    {
        for (i = gap; i < n; i++)
        {
            int temp = a[i];
            j = i - gap;

            while (j >= 0 && a[j] > temp)
            {
                a[j + gap] = a[j];
                j = j - gap;
            }

            a[j + gap] = temp;
        }
    }
}