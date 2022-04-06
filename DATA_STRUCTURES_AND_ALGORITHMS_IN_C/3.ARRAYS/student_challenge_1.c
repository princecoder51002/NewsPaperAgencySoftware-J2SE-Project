// write a program to find a single element in an array
// if starting from 1

// #include <stdio.h>

// int main()
// {
//     int i, sum = 0, s, n;
//     printf("enter the value of n: \n");
//     scanf("%d", &n);
//     int a[n];
//     for (i = 0; i < n; i++)
//     {
//         printf("enter value at a[%d]: \n", i);
//         scanf("%d", &a[i]);
//     }
//     for (i = 0; i < n; i++)
//     {
//         sum = sum + a[i];
//     }
//     s = (n + 1) * (n + 2) / 2;
//     printf("missing element : %d", s - sum);
//     return 0;
// }

// if not starting from 1

#include <stdio.h>

int main()
{
    int i, n;
    printf("enter the value of n: \n");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        printf("enter the value at a[%d]: \n", i);
        scanf("%d", &a[i]);
    }
    int diff = a[0];
    for (i = 0; i < n; i++)
    {
        if (a[i] - i != diff)
        {
            printf("missing element : %d", i + diff);
            break;
        }
    }
    return 0;
}