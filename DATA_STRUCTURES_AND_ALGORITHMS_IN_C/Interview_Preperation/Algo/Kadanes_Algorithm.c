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

    int Maximum_subArray_Sum(struct Array arr);
    int result = Maximum_subArray_Sum(arr);

    printf("Result: %d\n", result);


    return 0;
}

int Maximum_subArray_Sum(struct Array arr)
{
   int max_sum = 0;
   int max_ending_here = 0;

   int start = 0, s=0, end = 0;

   for(int i =0;i<arr.length;i++)
   {
       max_ending_here = max_ending_here + arr.A[i];

       if(max_ending_here > max_sum)
       {
           max_sum = max_ending_here;
           start = s;
           end = i;
       }

       if(max_ending_here < 0)
       {
           max_ending_here = 0;
           s = i + 1;
       }
   }

   printf("Starting Index: %d\n", start);
   printf("Ending index: %d\n", end);

   return max_sum;
}