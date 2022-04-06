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
    // struct Array arr1;
    // struct Array arr2;
    // printf("Enter the size of an array: \n");
    // scanf("%d", &arr1.size);
 
    // printf("Enter the length of an array: \n");
    // scanf("%d", &arr1.length);

    // arr1.A = (int *)malloc(arr1.size*(sizeof(int)));

    // for(int i =0; i<arr1.length ; i++)
    // {
    //     scanf("%d", &arr1.A[i]);
    // }

    // printf("Enter the size of an array: \n");
    // scanf("%d", &arr2.size);
 
    // printf("Enter the length of an array: \n");
    // scanf("%d", &arr2.length);

    // arr2.A = (int *)malloc(arr2.size*(sizeof(int)));

    // for(int i =0; i<arr2.length ; i++)
    // {
    //     scanf("%d", &arr2.A[i]);
    // }

    // void Sort1(struct Array *arr1, struct Array *arr2);
    // Sort1(&arr1,&arr2);

    int A[] = {2,1,2,5,7,1,9,3,6,8,8};
    int B[] = {2,1,8,3};

    int n = 11;
    int m = 4;

    void sort2(int A[], int B[], int m, int n);
    sort2(A,B,m,n);

    

    return 0;
}

// void Sort1(struct Array *arr1, struct Array *arr2)
// {
//     int max = 0;
//     for(int i = 0; i < arr1-> length ; i++)
//     {
//         if(max < arr1 -> A[i])
//         max = arr1 -> A[i];
//     }

//     struct Array hash;
//     hash.length = hash.size = max+1;
//     hash.A = (int *)malloc(hash.size*(sizeof(int)));

//     for(int i = 0; i<hash.length;i++)
//     {
//         hash.A[i] = 0;
//     }

//     for(int i = 0; i < arr1 -> length ;i++)
//     {
//         hash.A[arr1 -> A[i]]++;
//     }

//     for(int i = 0 ; i < arr2 -> length ; i++)
//     {
//         if(hash.A[arr2 -> A[i]] > 0)
//         {
//             for(int j = 0; j < hash.A[arr2 -> A[i]];j++)
//             {
//                 printf("%d ", arr2 -> A[i]);
//             }
//             hash.A[arr2 -> A[i]] = 0;
//         }
//     }

//     for(int i = 0; i< hash.length;i++)
//     {
//         if(hash.A[i] > 0)
//         {
//             for(int j = 0; j < hash.A[i];j++)
//             {
//                 printf("%d ", i);
//             }
//             hash.A[i] = 0;
//         }
//     }
// }

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void bubble_sort(int A[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        int flag = 0;
        for(int j=0;j<n-i-1;j++)
        {
            if(A[j] > A[j+1])
            {
            swap(&A[j], &A[j+1]);
            flag =1;
            }
        }

        if(flag==0)
        break;
    }
}

int search(int A[], int start, int end, int key)
{
    while(end > start)
    {
        int mid = (start + end) / 2;

        if(A[mid] == key)
        return mid;

        else if(key > A[mid])
        return search(A,mid+1,end,key);

        else if(key < A[mid])
        return search(A,start,mid-1,key);
    }
}

void sort2(int A[], int B[], int m, int n)
{
    int temp[n], visited[n];

    for(int i=0;i<n;i++)
    {
        temp[i] = A[i];
        visited[i] = 0;
    }

    bubble_sort(temp,n);

    int ind=0;

    for(int i = 0;i<m;i++)
    {
        int f = search(temp,0,n-1,B[i]);

        if(f==-1)
        continue;

        for(int j = f; (j<n && temp[j] == B[i]); j++)
        {
            A[ind++] = temp[j];
            visited[j] = 1;
        }
    }

    for(int i = 0;i<n;i++)
    {
        if(visited[i] == 0)
        A[ind++] = temp[i];
    }

    for(int i = 0;i<n;i++)
    {
        printf("%d ", A[i]);
    }
}