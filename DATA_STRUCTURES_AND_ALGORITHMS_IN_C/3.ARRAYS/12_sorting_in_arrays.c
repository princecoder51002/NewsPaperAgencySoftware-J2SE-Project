#include <stdio.h>

struct array
{
    int a[10];
    int size;
    int length;
};
void insertsort(struct array *arr, int x)
{
    int i = arr->length - 1;
    if (arr->length == arr->size)
        return;
    while (arr->a[i] > x && i >= 0)
    {
        arr->a[i + 1] = arr->a[i];
        i--;
    }
    arr->a[i + 1] = x;
    arr->length++;
}
int issorted(struct array arr)
{
    int i;
    for (i = 0; i < arr.length - 1; i++)
    {
        if (arr.a[i] > arr.a[i + 1])
            return -1; // not sorted
    }
    return 1; // sorted
}
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void rearrange(struct array *arr1)
{
    int i, j;
    i = 0;
    j = arr1->length - 1;
    while (i < j)
    {
        while (arr1->a[i] < 0)
            i++;
        while (arr1->a[j] >= 0)
            j--;
        if (i < j)
            swap(&arr1->a[i], &arr1->a[j]);
    }
}

void display(struct array arr)
{
    int i;
    printf("elements are: \n");
    for (i = 0; i < arr.length; i++)
        printf("%d", arr.a[i]);
}

int main()
{
    struct array arr = {{2, 3, 5, 10, 15}, 10, 5};
    struct array arr1 = {{2, -3, 5, 10, -15, -7}, 10, 6};
    void display(struct array arr);
    insertsort(&arr, 9);
    display(arr);
    printf("%d\n", issorted(arr));
    void rearrange(struct array * arr1);
    rearrange(&arr1);
    display(arr1);
    return 0;
}
