#include <stdio.h>

struct element
{
    int i;
    int j;
    int x;
};
struct sparse
{
    int m;
    int n;
    int num;
    struct element *e;
};
int main()
{
    struct sparse s;
    void create(struct sparse * s);
    void display(struct sparse s);
    create(&s);
    display(s);
    return 0;
}
void create(struct sparse *s)
{
    int i;
    printf("enter dimensions: \n");
    scanf("%d%d", &s->m, &s->n);
    printf("enter no. of non zero elements: \n");
    scanf("%d", &s->num);
    s->e = (struct element *)malloc(s->num * sizeof(struct element));
    printf("enter all non zero elements: \n");
    for (i = 0; i < s->num; i++)
    {
        scanf("%d%d%d", &s->e[i].i, &s->e[i].j, &s->e[i].x);
    }
}
void display(struct sparse s)
{
    int i, j, k = 0;
    for (i = 0; i < s.m; i++)
    {
        for (j = 0; j < s.n; j++)
        {
            if (i == s.e[k].i && j == s.e[k].j)
                printf("%d ", s.e[k++].x);
            else
                printf("0 ");
        }
        printf("\n");
    }
}