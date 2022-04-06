// #include <stdio.h>

// struct array
// {
//     int *a;
//     int size;
//     int length;
// };
// int main()
// {
//     int n, i;
//     struct array arr;
//     printf("enter the size of an array: \n");
//     scanf("%d", &arr.size);
//     arr.a = (int *)malloc(arr.size * sizeof(int));
//     arr.length = 0;
//     printf("enter no. of elements :\n");
//     scanf("%d", &n);
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &arr.a[i]);
//     }
//     arr.length = n;
//     display(arr);
//     return 0;
// }
// void display(struct array arr)
// {
//     int i;
//     printf("elements are: \n");
//     for (i = 0; i < arr.length; i++)
//         printf("%d\n", arr.a[i]);
// }

// now if we want to declare array size first (i.e not in heap)

#include <stdio.h>

struct array
{
    int a[20];
    int size;
    int length;
};
int main()
{
    struct array arr = {{2, 3, 4, 5, 6}, 20, 5};
    display(arr);
    return 0;
}
void display(struct array arr)
{
    int i;
    printf("elements are : \n");
    for (i = 0; i < arr.length; i++)
        printf("%d", arr.a[i]);
}