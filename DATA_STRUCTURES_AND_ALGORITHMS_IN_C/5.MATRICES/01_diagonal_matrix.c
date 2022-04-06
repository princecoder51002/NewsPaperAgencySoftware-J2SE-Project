#include <stdio.h>

struct matrix
{
    int a[10];
    int n;
};
int main()
{
    struct matrix m;
    m.n = 4;
    void set(struct matrix * m, int i, int j, int x);
    int get(struct matrix m, int i, int j);
    void display(struct matrix m);
    set(&m, 0, 0, 5);
    set(&m, 1, 1, 4);
    set(&m, 2, 2, 9);
    set(&m, 3, 3, 15);
    display(m);
    printf("\n");
    printf("%d", get(m, 3, 3));
    return 0;
}
void set(struct matrix *m, int i, int j, int x)
{
    if (i == j)
        m->a[i] = x;
}
int get(struct matrix m, int i, int j)
{
    if (i == j)
        return m.a[i];
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
            if (i == j)
                printf("%d ", m.a[i]);
            else
                printf("0 ");
        }
        printf("\n");
    }
}