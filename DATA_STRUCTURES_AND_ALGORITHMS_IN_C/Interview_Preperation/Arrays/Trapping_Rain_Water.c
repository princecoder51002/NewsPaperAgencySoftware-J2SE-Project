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

    int Trapped_Water(struct Array arr);
    int total = Trapped_Water(arr);

    printf("Total Water Can be Trapped: %d \n", total);

    return 0;
}

int max(int x, int y)
{
    return (x > y) ? x : y;
}

int min(int x, int y)
{
    return (x < y) ? x : y;
}

int Trapped_Water(struct Array arr)
{
    struct Array left;
    struct Array right;

    left.length = left.size = arr.length;
    right.length = right.size = arr.length;

    left.A = (int *)malloc(left.size*(sizeof(int)));
    right.A = (int *)malloc(right.size*(sizeof(int)));

    left.A[0] = arr.A[0];
    right.A[arr.length - 1] = arr.A[arr.length - 1];

    for(int i = 1; i < left.length ; i++)
    {
        left.A[i] = max(arr.A[i], left.A[i-1]);
    }

    for(int i = arr.length - 2; i>=0;i --)
    {
        right.A[i] = max(arr.A[i], right.A[i+1]);
    }
    
    int answer = 0;

    for(int i =0 ; i<left.length;i++)
    {
        answer += min(left.A[i],right.A[i]) - arr.A[i];
    }

    return answer;
}