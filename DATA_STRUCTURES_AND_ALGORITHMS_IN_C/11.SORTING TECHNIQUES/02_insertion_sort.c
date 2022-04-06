#include <stdio.h>

int main()
{

    int i;
    int a[] = {3, 7, 9, 10, 6, 5, 12, 4, 11, 2};
    void insertionsort(int a[], int n);
    insertionsort(a, 10);
    for (i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}

void insertionsort(int a[], int n)
{
    int i, j, x;
    for (i = 1; i < n; i++)
    {
        j = i - 1;
        x = a[i];
        while (j > -1 && a[j] < x)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = x;
    }
}
