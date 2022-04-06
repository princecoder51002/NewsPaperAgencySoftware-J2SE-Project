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
    struct Array arr1;
    struct Array arr2;
    printf("Enter the size of an array: \n");
    scanf("%d", &arr1.size);
 
    printf("Enter the length of an array: \n");
    scanf("%d", &arr1.length);

    arr1.A = (int *)malloc(arr1.size*(sizeof(int)));

    for(int i =0; i<arr1.length ; i++)
    {
        scanf("%d", &arr1.A[i]);
    }

    printf("Enter the size of an array: \n");
    scanf("%d", &arr2.size);
 
    printf("Enter the length of an array: \n");
    scanf("%d", &arr2.length);

    arr2.A = (int *)malloc(arr2.size*(sizeof(int)));

    for(int i =0; i<arr2.length ; i++)
    {
        scanf("%d", &arr2.A[i]);
    }
    int Minimum_Platforms(struct Array arr1, struct Array arr2);
    int Minimum_platforms2(struct Array arr, struct Array dep);

    int answer = Minimum_Platforms(arr1,arr2);
    printf("Minimum Platform Required: %d\n", answer);

    int answer2 = Minimum_platforms2(arr1,arr2);
    printf("Minimum Platform Required: %d", answer2);

    return 0;
}

int max(int x, int y)
{
    return (x > y) ? x : y;
}

int Minimum_Platforms(struct Array arr1, struct Array arr2)
{
    int answer = 1;
    for(int i = 0 ; i < arr1.length - 1 ; i++)
    {
        int platform_needed = 1;
        for(int j = i+1; j < arr1.length ; j++)
        {
            if((arr1.A[i] >= arr1.A[j] && arr1.A[i] <= arr2.A[j]) || (arr1.A[j] >= arr1.A[i] && arr1.A[j] <= arr2.A[i]))
            platform_needed++;
        }
        answer = max(answer,platform_needed);
    }

    return answer;
}

int Minimum_platforms2(struct Array arr, struct Array dep)
{
    int platform_needed = 1, result = 1;
    int i = 1, j = 0;

    while(i < arr.length && j < dep.length)
    {
        if(arr.A[i] <= dep.A[j])
        {
            platform_needed++;
            i++;
        }

        else if(arr.A[i] > dep.A[j])
        {
            platform_needed--;
            j++;
        }

        if(platform_needed > result)
        result = platform_needed;
    }

    return result;
}