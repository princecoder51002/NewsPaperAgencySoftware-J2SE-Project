// This is a menu driven program for diagonal matrix
// but we can do this for other matrices in a similar way  

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a, n, ch, x, i, j;
    printf("enter dimensions: \n");
    scanf("%d", &n);
    a = (int *)malloc(n * sizeof(int));
    do
    {
        printf("1.create\n");
        printf("2.get\n");
        printf("3.set\n");
        printf("4.display\n");

        printf("enter your choice: \n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            for (i = 0; i < n; i++)
            {
                scanf("%d", &a[i]);
            }
            break;

        case 2:
            printf("enter indices: \n");
            scanf("%d%d", &i, &j);
            if (i == j)
                printf("%d ", a[i]);
            else
                printf("0 ");
            break;

        case 3:
            printf("enter row , column and element:\n");
            scanf("%d%d%d", &i, &j, &x);
            if (i == j)
                a[i] = x;
            break;

        case 4:
            for (i = 0; i < n; i++)
            {
                for (j = 0; j < n; j++)
                {
                    if (i == j)
                        printf("%d ", a[i]);
                    else
                        printf("0 ");
                }
                printf("\n");
            }
        }
    } while (ch < 5);

    return 0;
}