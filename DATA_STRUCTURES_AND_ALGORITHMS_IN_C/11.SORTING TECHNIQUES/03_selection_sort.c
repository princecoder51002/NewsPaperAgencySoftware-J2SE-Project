#include <stdio.h>

int main()
{

    int i;
    int a[] = {8, 6, 3, 2, 5, 4};
    void selectionsort(int a[], int n);
    selectionsort(a, 6);
    for (i = 0; i < 6; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}

void selectionsort(int a[], int n)
{
    void swap(int *x, int *y);
    int i, j, k;
    for (i = 0; i < n - 1; i++)
    {
        j = k = i;
        while (j < n)
        {
            j++;
            if (a[j] < a[k])
            {
                k = j;
                j++;
            }
            else
                j++;
        }
        swap(&a[i], &a[k]);
    }
}

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}