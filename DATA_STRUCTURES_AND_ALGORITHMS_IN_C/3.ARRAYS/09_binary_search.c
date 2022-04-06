// #include <stdio.h>
// #include <math.h>

// struct array
// {
//     int a[10];
//     int size;
//     int length;
// };
// int main()
// {
//     struct array arr = {{2, 3, 4, 5, 6}, 10, 5};
//     printf("index : %d", binarysearch(arr, 3));
//     return 0;
// }
// int binarysearch(struct array arr, int key)
// {
//     int l, mid, h;
//     l = 0;
//     h = arr.length - 1;
//     while (l <= h)
//     {
//         mid = floor((l + h) / 2);
//         if (key == arr.a[mid])
//             return mid;
//         else if (key < arr.a[mid])
//             h = mid - 1;
//         else
//             l = mid + 1;
//     }
//     return -1; // not found
// }

#include <stdio.h>
#include <math.h>

struct array
{
    int a[10];
    int size;
    int length;
};
int main()
{
    struct array arr = {{2, 3, 4, 8, 9}, 10, 5};
    printf("index : %d", rbinarysearch(arr, 0, arr.length-1, 9));
    return 0;
}
int rbinarysearch(struct array arr, int l, int h, int key)
{
    int mid;
    if (l <= h)
    {
        mid = floor((l + h) / 2);
        if (key == arr.a[mid])
            return mid;
        else if (key < arr.a[mid])
            return rbinarysearch(arr, l, mid - 1, key);
        else
            return rbinarysearch(arr, mid + 1, h, key);
    }
    return -1; // not found
}