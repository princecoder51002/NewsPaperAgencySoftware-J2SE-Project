// BY column MAJOR MAPING

#include <stdio.h>

struct matrix
{
    int *a;
    int n;
};
int main()
{
    int i, j, x;
    struct matrix m;
    printf("enter dimension: \n");
    scanf("%d", &m.n);
    m.a = (int *)malloc(m.n * (m.n + 1) / 2 * sizeof(int));
    void set(struct matrix * m, int i, int j, int x);
    int get(struct matrix m, int i, int j);
    void display(struct matrix m);
    printf("enter all elements: \n");
    for (i = 0; i < m.n; i++)
    {
        for (j = 0; j < m.n; j++)
        {
            scanf("%d", &x);
            set(&m, i, j, x);
        }
    }
    printf("\n");
    display(m);
    return 0;
}
void set(struct matrix *m, int i, int j, int x)
{
    if (i <= j)
        m->a[j * (j + 1) / 2 + (i)] = x;
}
int get(struct matrix m, int i, int j)
{
    if (i <= j)
        return m.a[j * (j + 1) / 2 + (i)];
    else
        return 0;
}
void display(struct matrix m)
{
    int i, j;
    for (i = 0; i < m.n; i++)
    {
        for (j = 0; j < m.n; j++)
        {
            if (i <= j)
                printf("%d ", m.a[j * (j + 1) / 2 + (i)]);
            else
                printf("0 ");
        }
        printf("\n");
    }
}

// BY ROW MAJOR MAPING

// struct matrix
// {
//     int *a;
//     int n;
// };
// int main()
// {
//     int i, j, x;
//     struct matrix m;
//     printf("enter dimension: \n");
//     scanf("%d", &m.n);
//     m.a = (int *)malloc(m.n * (m.n + 1) / 2 * sizeof(int));
//     void set(struct matrix * m, int i, int j, int x);
//     int get(struct matrix m, int i, int j);
//     void display(struct matrix m);
//     printf("enter all elements: \n");
//     for (i = 0; i < m.n; i++)
//     {
//         for (j = 0; j < m.n; j++)
//         {
//             scanf("%d", &x);
//             set(&m, i, j, x);
//         }
//     }
//     printf("\n");
//     display(m);
//     return 0;
// }
// void set(struct matrix *m, int i, int j, int x)
// {
//     if (i <= j)
//         m->a[(m->n * (i) - (i * (i - 1) / 2)) + (j - i)] = x;
// }
// int get(struct matrix m, int i, int j)
// {
//     if (i <= j)
//         return m.a[(m.n * (i) - (i * (i - 1) / 2)) + (j - i)];
//     else
//         return 0;
// }
// void display(struct matrix m)
// {
//     int i, j;
//     for (i = 0; i < m.n; i++)
//     {
//         for (j = 0; j < m.n; j++)
//         {
//             if (i <= j)
//                 printf("%d ", m.a[(m.n * (i) - (i * (i - 1) / 2)) + (j - i)]);
//             else
//                 printf("0 ");
//         }
//         printf("\n");
//     }
// }