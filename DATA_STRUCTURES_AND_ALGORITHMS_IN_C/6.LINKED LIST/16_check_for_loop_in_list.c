#include <stdio.h>

struct node
{
    int data;
    struct node *next;
} *first = NULL;

int main()
{
    struct node *t1, *t2;
    int a[4] = {10, 20, 30, 40};
    void create(int a[], int n);
    int isloop(struct node * f);
    create(a, 4);
    t1 = first->next->next;       // pointing to 2nd node
    t2 = first->next->next->next; // pointing to last node
    t2->next = t1;                // forming loop
    int m = isloop(first);
    printf("%d", m);
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

int isloop(struct node *f)
{
    struct node *p, *q;
    p = q = f;
    do
    {
        p = p->next;
        q = q->next;
        if (q)
            q = q->next;
        else
            q = NULL;

    } while (p && q && p != q);
    if (p == q)
        return 1;
    else
        return 0;
}