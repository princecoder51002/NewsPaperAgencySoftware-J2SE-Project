// #include <stdio.h>

// int main()
// {
//     int count, i, j;
//     char a[30];
//     printf("enter string: \n");
//     gets(a);
//     for (i = 0; a[i] != '\0'; i++)
//     {
//         count = 1;
//         if (a[i] != -1)
//         {
//             for (j = i + 1; a[j] != '\0'; j++)
//             {
//                 if (a[i] == a[j])
//                 {
//                     count++;
//                     a[j] = -1;
//                 }
//             }
//             if (count > 1)
//             {
//                 printf("duplicated character: %c\n", a[i]);
//                 printf("%c appearing %d times\n", a[i], count);
//             }
//         }
//     }
//     return 0;
// }

// now using hash table

// #include <stdio.h>

// int main()
// {
//     int i;
//     char a[30];
//     printf("enter string: \n");
//     gets(a);
//     int h[52];
//     for (i = 0; i < 52; i++)
//         h[i] = 0;
//     for (i = 0; a[i] != '\0'; i++)
//     {
//         if (a[i] >= 65 && a[i] <= 90)
//             h[a[i] - 65]++;
//         else if (a[i] >= 97 && a[i] <= 122)
//             h[a[i] - 97 + 26]++;
//     }
//     for (i = 0; i < 52; i++)
//     {
//         if (h[i] > 1 && i <= 25)
//         {
//             printf("duplicated character: %c\n", i + 65);
//             printf("%c appearing %d times\n", i + 65, h[i]);
//         }
//         else if (h[i] > 1 && (i > 25 && i <= 51))
//         {
//             printf("duplicated character: %c\n", i + 97 - 26);
//             printf("%c appearing %d times\n", i + 97 - 26, h[i]);
//         }
//     }
//     return 0;
// }

// now using bits

#include <stdio.h>

int main()
{
    int i, h = 0, x = 0;
    char a[30];
    printf("enter string: \n");
    gets(a);
    for (i = 0; a[i] != '\0'; i++)
    {
        x = 1;
        x = x << (a[i] - 97);
        if ((x & h) > 0)
        { // masking condition
            printf("duplicated character: %c\n", a[i]);
        }
        else
            h = x | h; // merging condition
    }
    return 0;
}