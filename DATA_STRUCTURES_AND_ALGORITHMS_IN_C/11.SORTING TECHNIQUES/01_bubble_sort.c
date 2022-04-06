#include <stdio.h>

int main()
{

    int i;
    int a[] = {3, 7, 9, 10, 6, 5, 12, 4, 11, 2};
    int b[] = {2, 3, 4, 5, 6, 7};
    void bubblesort(int a[], int n);
    bubblesort(a, 10);
    bubblesort(b, 6); // in debug area we can see that flag will be 0 and loop will break in bubble sort

    for (i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}

void bubblesort(int a[], int n)
{
    int i, j, flag = 0;
    void swap(int *x, int *y);
    for (i = 0; i < n - 1; i++)
    {
        flag = 0;
        for (j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(&a[j], &a[j + 1]);
                flag = 1;
            }
        }
        if (flag == 0)
            break;
    }
}

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}