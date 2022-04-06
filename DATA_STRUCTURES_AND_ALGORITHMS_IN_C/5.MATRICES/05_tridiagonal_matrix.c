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
    m.a = (int *)malloc(3 * m.n - 2 * sizeof(int));
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
    if (i >= j)
        m->a[i * (i + 1) / 2 + j] = x;
}
int get(struct matrix m, int i, int j)
{
    if (i >= j)
        return m.a[i * (i + 1) / 2 + j];
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
            if (i - j == 0)
                printf("%d ", m.a[i]);
            else if (i - j == 1)
                printf("%d ", m.a[m.n + i]);
            else if (i - j == -1)
                printf("%d ", m.a[2 * m.n - 1 + i]);
            else
                printf("0 ");
        }
        printf("\n");
    }
}