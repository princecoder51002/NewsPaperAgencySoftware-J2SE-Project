#include <stdio.h>

struct array
{
    int a[10];
    int size;
    int length;
};
int main()
{
    struct array arr = {{2, 3, 4, 5, 6}, 10, 5};
    insert(&arr, 3, 10);
    display(arr);
    return 0;
}
void insert(struct array *arr, int index, int x)
{
    int i;
    if (index >= 0 && index <= arr->length) // condition
    {
        for (i = arr->length; i > index; i--)
        {
            arr->a[i] = arr->a[i - 1];
        }
        arr->a[index] = x;
        arr->length++;
    }
}
void display(struct array arr)
{
    int i;
    printf("elements are : \n");
    for (i = 0; i < arr.length; i++)
        printf("%d", arr.a[i]);
}