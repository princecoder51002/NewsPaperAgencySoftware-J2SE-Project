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
    delete (&arr, 3);
    display(arr);
    return 0;
}
int delete (struct array *arr, int index)
{
    int x = 0;
    int i;
    if (index >= 0 && index < arr->length)
    {
        x = arr->a[index];
        for (i = index; i < arr->length - 1; i++)
        {
            arr->a[i] = arr->a[i + 1];
        }
        arr->length--;
        return x;
    }
    return 0;
}
void display(struct array arr)
{
    int i;
    printf("elements are : \n");
    for (i = 0; i < arr.length; i++)
        printf("%d", arr.a[i]);
}