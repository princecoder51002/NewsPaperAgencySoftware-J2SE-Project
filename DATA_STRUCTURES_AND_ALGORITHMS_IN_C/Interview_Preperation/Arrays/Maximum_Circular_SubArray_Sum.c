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

    int Maximum_Circular_SubArray_Sum(struct Array *arr, struct Array arr2);
    int answer1 = Maximum_Circular_SubArray_Sum(&arr, arr);

    int kadanes(struct Array arr);
    int answer2 = kadanes(arr);

    if(answer1 > answer2)
    printf("%d", answer1);

    else 
    printf("%d", answer2);

    return 0;
}

int kadanes(struct Array arr)
{
    int max_sum = 0;
    int max_ending_here = 0;

    for(int i = 0;  i < arr.length ; i++)
    {
        max_ending_here = max_ending_here + arr.A[i];

        if(max_ending_here > max_sum)
        max_sum = max_ending_here;

        if(max_ending_here < 0)
        max_ending_here = 0;
    }

    return max_sum;
}

int Maximum_Circular_SubArray_Sum(struct Array *arr, struct Array arr2)
{
     int sum = 0;

     for(int i = 0; i< arr -> length ; i++)
     {
         sum = sum + arr -> A[i];
         arr -> A[i] = -(arr -> A[i]);
     }

     int reverse_max_sum_subarray = kadanes(arr2);

     int answer = sum - (-reverse_max_sum_subarray);

     return answer;
}