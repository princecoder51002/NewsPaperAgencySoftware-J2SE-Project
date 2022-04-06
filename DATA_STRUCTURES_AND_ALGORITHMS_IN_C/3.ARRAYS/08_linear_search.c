// #include <stdio.h>

// struct array
// {
//     int a[10];
//     int size;
//     int length;
// };
// int main()
// {
//     struct array arr = {{2, 3, 4, 5, 6}, 10, 5};
//     int m = linearsearch(arr, 4);
//     printf("found at : %d", m);
//     return 0;
// }
// int linearsearch(struct array arr, int key)
// {
//     int i;
//     for (i = 0; i < arr.length; i++)
//     {
//         if (key == arr.a[i])
//             return i;
//     }
//     return -1;
// }

// improving linear search

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
    linearsearch(&arr, 4);
    display(arr);
    return 0;
}
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int linearsearch(struct array *arr, int key)
{
    int i;
    for (i = 0; i < arr->length; i++)
    {
        if (key == arr->a[i])
        {
            swap(&arr->a[i], &arr->a[i - 1]); // for move to head/front ------> swap(&arr->a[i],&arr->a[i-1])
            return i;
        }
    }
    return -1;
}
void display(struct array arr)
{
    int i;
    printf("elements are: \n");
    for (i = 0; i < arr.length; i++)
        printf("%d", arr.a[i]);
}