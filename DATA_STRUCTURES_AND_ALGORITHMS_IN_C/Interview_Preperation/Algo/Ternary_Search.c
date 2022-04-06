#include <stdlib.h>
#include <stdio.h>

struct Array
{
    int *A;
    int size;
    int length;
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
    
    int Tsearch_recursive(struct Array arr, int l, int h, int key);
    // int result = Tsearch_recursive(arr,0,arr.length-1,11);

    int Tsearch_iterative(struct Array arr, int l, int h, int key);
    int result = Tsearch_iterative(arr,0,arr.length-1,9);

    printf("%d", result);

    return 0;
}

//---------------Recursive Approach----------------

int Tsearch_recursive(struct Array arr, int l, int h, int key)
{
    if( h >= l )
    {
         int mid1 = l + (h-l)/3;
         int mid2 = h - (h-l)/3;

         if(arr.A[mid1] == key)
         return mid1;

         if(arr.A[mid2] == key)
         return mid2;

         else if(arr.A[mid1] > key)
         return Tsearch_recursive(arr,l,mid1-1,key);

         else if(arr.A[mid2] < key)
         return Tsearch_recursive(arr,mid2+1,h,key);

         else
         return Tsearch_recursive(arr,mid1+1,mid2-1,key);

    }

         return -1;
}

//---------------Iterative Approach---------------------------

int Tsearch_iterative(struct Array arr, int l, int h, int key)
{
    while(l <= h)
    {
        int mid1 = l + (h-l)/3;
        int mid2 = h - (h-l)/3;

        if(arr.A[mid1] == key)
         return mid1;

        if(arr.A[mid2] == key)
         return mid2;

        else if(arr.A[mid1] > key)
        h = mid1 - 1;

        else if(arr.A[mid2] < key)
        l = mid2 + 1;

        else 
        {
            l = mid1 + 1;
            h = mid2 - 1;
        }

    }

    return -1;
}