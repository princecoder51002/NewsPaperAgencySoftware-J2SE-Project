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

    int Maximum_Number_Of_Traingles(struct Array arr);
    int Maximum_Number_of_Triangles2(struct Array arr);
    int total = Maximum_Number_of_Triangles2(arr);

    printf("Total No. Of Possible Traingles: %d", total);
    

    return 0;
}

int Maximum_Number_Of_Traingles(struct Array arr)
{
    int count = 0;

    for(int i = 0;i<arr.length -2 ; i++)
    {
        for(int j = i+1; j < arr.length - 1; j++)
        {
            for(int k = j+1; k < arr.length ; k++)
            {
                if(arr.A[i] + arr.A[j] > arr.A[k] && arr.A[i] + arr.A[k] > arr.A[j] && arr.A[j] + arr.A[k] > arr.A[i])
                count ++;
            }
        }
    }

    return count;
}

int Maximum_Number_of_Triangles2(struct Array arr)
{
    int count = 0;
    for(int i = 0 ; i < arr.length -2 ; i++)
    {
        int l = i + 1;
        int r = arr.length - 1;

        while(l<=r)
        {
            if(arr.A[l] + arr.A[r] > arr.A[i])
            {
                count += r-l;
                r--;
            }

            else 
            l++;
        }
    }

    return count;
}