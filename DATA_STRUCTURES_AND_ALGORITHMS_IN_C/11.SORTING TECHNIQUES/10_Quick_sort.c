#include <stdio.h>

int main()
{

    int a[] = {11, 13, 7, 12, 16, 9, 24, 5, 10, 3, __INT32_MAX__}, n = 11, i;

    void quicksort(int a[], int l, int h);
    quicksort(a, 0, n - 1);
    for (i = 0; i < 11; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int partition(int a[], int l, int h)
{
    int pivot = a[l];
    int i = l;
    int j = h;

    do
    {
        do
        {
            i++;
        } while (a[i] <= pivot);
        do
        {
            j--;
        } while (a[j] > pivot);

        if (i < j)
            swap(&a[i], &a[j]);
    } while (i < j);

    swap(&a[l], &a[j]);

    return j;
}

void quicksort(int a[], int l, int h)
{
    int j;
    if (l < h)
    {
        j = partition(a, l, h);
        quicksort(a, l, j);
        quicksort(a, j + 1, h);
    }
}