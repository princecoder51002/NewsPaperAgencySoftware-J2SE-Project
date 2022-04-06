#include <stdio.h>

struct node
{
    int data;
    struct node *next;
} *first = NULL;

int main()
{
    int n, i;
    printf("enter the no. of terms: \n");
    scanf("%d", &n);
    int a[n];
    printf("elements are: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    void create(int a[], int n);
    create(a, n);
    int max(struct node * p);
    int c = max(first);
    printf("maximum element : %d", c);
    int max1(struct node * p);
    int m = max1(first);
    printf("maximum element : %d", m);

    return 0;
}
void create(int a[], int n)
{
    int i;
    struct node *t, *last;
    first = (struct node *)malloc(sizeof(struct node));
    first->data = a[0];
    first->next = NULL;
    last = first;
    for (i = 1; i < n; i++)
    {
        t = (struct node *)malloc(sizeof(struct node));
        t->data = a[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
int max(struct node *p)
{
    int max = p->data;
    while (p != NULL)
    {
        if (max < p->data)
            max = p->data;
        p = p->next;
    }
    return max;
}
int max1(struct node *p)
{
    int x = 0;
    static int max = -34526;
    if (p == 0)
        return max;
    else
    {
        x = max1(p->next);
        if (x > p->data)
            return x;
        else
            return p->data;
    }
}