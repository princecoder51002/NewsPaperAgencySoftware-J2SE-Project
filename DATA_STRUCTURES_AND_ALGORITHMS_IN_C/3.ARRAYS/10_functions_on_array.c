#include <stdio.h>

struct array
{
    int a[10];
    int size;
    int length;
};
int get(struct array arr, int index)
{
    if (index >= 0 && index < arr.length)
        return arr.a[index];
    else
        return -1;
}
void set(struct array *arr, int index, int x)
{
    if (index >= 0 && index < arr->length)
        arr->a[index] = x;
}
int max(struct array arr)
{
    int max = arr.a[0];
    int i;
    for (i = 0; i < arr.length; i++)
    {
        if (arr.a[i] > max)
            max = arr.a[i];
    }
    return max;
}
int min(struct array arr)
{
    int min = arr.a[0];
    int i;
    for (i = 0; i < arr.length; i++)
    {
        if (arr.a[i] < min)
            min = arr.a[i];
    }
    return min;
}
int sum(struct array arr)
{
    int s = 0;
    int i;
    for (i = 0; i < arr.length; i++)
    {
        s = s + arr.a[i];
    }
    return s;
}
float average(struct array arr)
{
    return (float)sum(arr) / arr.length;
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
    struct array arr = {{2, 3, 9, 16, 18, 21, 28, 32, 35}, 10, 9};
    printf("element : %d\n", get(arr, 5));
    set(&arr, 3, 20);
    display(arr);
    printf("maximum : %d\n", max(arr));
    printf("minimum : %d\n", min(arr));
    printf("total : %d\n", sum(arr));
    printf("average : %f\n", average(arr));
    return 0;
}
