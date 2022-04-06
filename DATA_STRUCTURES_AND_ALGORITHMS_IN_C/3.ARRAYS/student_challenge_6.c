// write a program to find duplicates in unsrted array

// #include <stdio.h>

// int main()
// {
//     int i, n, count, j;
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
//         count = 1;
//         if (a[i] != -1)
//         {
//             for (j = i + 1; j < n; j++)
//             {
//                 if (a[i] == a[j])
//                 {
//                     count++;
//                     a[j] = -1;
//                 }
//             }
//             if (count > 1)
//             {
//                 printf("duplicated element : %d\n", a[i]);
//                 printf("%d apperaing %d times\n", a[i], count);
//             }
//         }
//     }
//     return 0;
// }

// 2nd method using hash table

#include <stdio.h>

int main()
{
    int i, n, count, j;
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
        h[a[i]]++;
    }
    for (i = 0; i <= max; i++)
    {
        if (h[i] > 1)
        {
            printf("duplicated element : %d\n", i);
            printf("%d appearing %d times\n", i, h[i]);
        }
    }
    return 0;
}