// write a program to find a pair with sum k (a+b=k) in unsorted array

// #include <stdio.h>

// int main()
// {
//     int i, j, k, n;
//     printf("enter the value of sum you want: \n");
//     scanf("%d", &k);
//     printf("enter the value of n: \n");
//     scanf("%d", &n);
//     int a[n];

//     for (i = 0; i < n; i++)
//     {
//         printf("enter the value at a[%d]: \n", i);
//         scanf("%d", &a[i]);
//     }
//     for (i = 0; i < n - 1; i++)
//     {
//         for (j = i + 1; j < n; j++)
//         {
//             if (a[i] + a[j] == k)
//                 printf("%d+%d=%d\n", a[i], a[j], k);
//         }
//     }
//     return 0;
// }

// faster method using hashing

#include <stdio.h>

int main()
{
    int i, n, j, k;
    printf("enter the value of sum you want: \n");
    scanf("%d", &k);
    printf("enter the value of n: \n");
    scanf("%d", &n);
    int a[n];

    for (i = 0; i < n; i++)
    {
        printf("enter the value at a[%d]: \n", i);
        scanf("%d", &a[i]);
    }
    int max = a[0];
    for (i = 0; i < n; i++)
    {
        if (max < a[i])
            max = a[i];
    }
    int h[max + 1];
    for (i = 0; i < max + 1; i++)
        h[i] = 0;
    for (i = 0; i < n; i++)
    {
        if (k - a[i] < 0)
            continue;
        else if (h[k - a[i]] != 0) // element is already found
            printf("%d+%d=%d\n", a[i], k - a[i], k);
        h[a[i]]++;
    }
    return 0;
}