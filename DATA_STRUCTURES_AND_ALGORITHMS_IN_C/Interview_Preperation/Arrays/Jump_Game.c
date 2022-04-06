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

    int Jump_game(struct Array arr);
    int ans = Jump_game(arr);

    printf("%d", ans);

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

int Jump_game(struct Array arr)
{
    if(arr.length <= 1)
     return 0;

     if(arr.A[0] == 0)
     return -1;

     int maxReach = arr.A[0];
     int step = arr.A[0];
     int jump = 1;

     for(int i = 1; i<arr.length;i++)
     {
             if(i == arr.length-1)
             return jump;

             maxReach = max(maxReach, i+arr.A[i]);

             step--;

             if(step == 0)
             {
                 jump++;
                 if(i >= maxReach)
                 return -1;

                 step = maxReach - i;
             }
     }

     return -1;
}