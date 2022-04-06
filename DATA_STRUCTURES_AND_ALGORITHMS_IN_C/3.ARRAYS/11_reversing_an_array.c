#include <stdio.h>

struct array
{
    int a[10];
    int size;
    int length;
};
int main()
{
    struct array arr = {{2, 3, 9, 16, 18, 21, 28, 32, 35}, 10, 9};
    reverse(&arr);
    display(arr);
    reverse2(&arr); // by swapping
    display(arr);

    return 0;
}
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void display(struct array arr)
{
    int i;
    printf("elements are: \n");
    for (i = 0; i < arr.length; i++)
        printf("%d", arr.a[i]);
}
void reverse(struct array *arr)
{
    int *b;
    int i, j;
    b = (int *)malloc(arr->length * sizeof(int));
    for (i = arr->length - 1, j = 0; i >= 0; i--, j++)
        b[j] = arr->a[i];
    for (i = 0; i < arr->length; i++)
        arr->a[i] = b[i];
}
void reverse2(struct array *arr)
{
    int i, j;
    for (i = 0, j = arr->length - 1; i < j; i++, j--)
        swap(&arr->a[i], &arr->a[j]);
}