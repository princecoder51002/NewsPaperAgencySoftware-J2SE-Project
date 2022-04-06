#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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

    arr.A = (int *)malloc(arr.size * (sizeof(int)));

    for (int i = 0; i < arr.length; i++)
    {
        scanf("%d", &arr.A[i]);
    }

    int Allocate_Minimum_No_Of_Pages(struct Array arr, int m);
    int ans = Allocate_Minimum_No_Of_Pages(arr, 3);

    printf("Minimum Pages Required: %d", ans);

    return 0;
}

bool possible(struct Array arr, int m, int curr_mid)
{
    int curr_sum = 0;
    int student_required = 1;

    for (int i = 0; i < arr.length; i++)
    {

        if (arr.A[i] > curr_mid)
            return false;

        if (curr_sum + arr.A[i] > curr_mid)
        {
            student_required++;
            curr_sum = arr.A[i];

            if (student_required > m)
                return false;
        }

        else
        {
            curr_sum = curr_sum + arr.A[i];
        }
    }

    return true;
}

int Allocate_Minimum_No_Of_Pages(struct Array arr, int m)
{
    int sum = 0;
    int max = 0;

    for (int i = 0; i < arr.length; i++)
    {
        sum = sum + arr.A[i];

        if (max < arr.A[i])
            max = arr.A[i];
    }

    int start = max;
    int end = sum;

    int result = 0;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (possible(arr, m, mid))
        {
            result = mid;
            end = mid - 1;
        }

        else
            start = mid + 1;
    }

    return result;
}