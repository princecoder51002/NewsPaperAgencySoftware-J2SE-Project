#include <stdio.h>
#include <stdlib.h>

struct Array 
{
    int *A;
    int length;
    int size;
};

int main()
{
    struct Array arr;
    printf("Enter the size of an array: \n");
    scanf("%d", &arr.size);
 
    printf("Enter the length of an array: \n");
    scanf("%d", &arr.length);

    arr.A = (int *)malloc(arr.size*(sizeof(int)));

    for(int i =0; i<arr.length ; i++)
    {
        scanf("%d", &arr.A[i]);
    }

    int Maximum_Index(struct Array arr);
    int res = Maximum_Index(arr);

    printf("Maximum Index: %d", res);


    return 0;
}

int Maximum_Index(struct Array arr)
{
    int i, j;

    int max=0;
    int diff=0;
    for(int i=0; i<arr.length-1;i++)
    {
        for(j = i+1;j<arr.length;j++)
        {
               if(arr.A[i] < arr.A[j])
               diff = j - i;

               if(diff > max)
               max = diff;
        }
    }

    return max;
}

int min(int x, int y)
{
    return (x < y) ? x : y;
}

int max(int x, int y)
{
    return (x > y) ? x : y;
}

// int Maximum_Index(struct Array arr)
// {
//     struct Array Lmin;
//     struct Array Rmax;

//     Lmin.size  = arr.size;
//     Rmax.size = arr.size;
//     Lmin.length = arr.length;
//     Rmax.length = arr.length;

//     Lmin.A  = (int *)malloc(Lmin.size*(sizeof(int)));
//     Rmax.A = (int *)malloc(Rmax.size*(sizeof(int)));
//     Lmin.A[0] = arr.A[0];
//     Rmax.A[arr.length-1] = arr.A[arr.length-1];

//     for(int i=1;i<arr.length;i++)
//     {
//         Lmin.A[i] = min(arr.A[i], Lmin.A[i-1]);
//     }

//     for(int i = arr.length-2;i>=0;i++)
//     {
//         Rmax.A[i] = max(arr.A[i], Rmax.A[i+1]);
//     }

//     int i=0, j=0;
//     int diff = 0;

//     while(i < arr.length && j < arr.length)
//     {
//         if(Lmin.A[i] <= Rmax.A[j])
//         {
//         diff = max(diff, j - i);
//         j++;
//         }
//         else 
//         i++;
//     }
//     return diff;

// }