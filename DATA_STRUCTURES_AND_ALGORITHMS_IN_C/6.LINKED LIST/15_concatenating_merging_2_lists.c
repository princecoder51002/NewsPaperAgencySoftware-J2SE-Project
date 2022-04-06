#include <stdio.h>

struct node
{
    int data;
    struct node *next;
} *first = NULL, *second = NULL, *third = NULL;

int main()
{
    int n, i;
    printf("enter the no. of terms: \n");
    scanf("%d", &n);
    int a[n];
    int b[n];
    printf("elements of A are: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("elements of B are: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }
    void create(int a[], int n);
    void create2(int b[], int n);
    void concate(struct node * p, struct node * q);
    void merge(struct node * p, struct node * q);
    void display(struct node * p);
    create(a, n);
    display(first);
    printf("\n\n");
    create2(b, n);
    display(second);
    // printf("\nafter concatination\n");
    // concate(first,second);
    // display(third);
    printf("\nafter merging\n");
    merge(first, second);
    display(third);
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
void create2(int b[], int n)
{
    int i;
    struct node *t, *last;
    second = (struct node *)malloc(sizeof(struct node));
    second->data = b[0];
    second->next = NULL;
    last = second;
    for (i = 1; i < n; i++)
    {
        t = (struct node *)malloc(sizeof(struct node));
        t->data = b[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
void display(struct node *p)
{
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}
void concate(struct node *p, struct node *q)
{
    third = p;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = q;
}
void merge(struct node *p, struct node *q)
{
    struct node *last;
    if (p->data < q->data)
    {
        third = last = p;
        p = p->next;
        third->next = NULL;
    }
    else
    {
        third = last = q;
        q = q->next;
        third->next = NULL;
    }
    while (p && q)
    {
        if (p->data < q->data)
        {
            last->next = p;
            last = p;
            p = p->next;
            last->next = NULL;
        }
        else
        {
            last->next = q;
            last = q;
            q = q->next;
            last->next = NULL;
        }
    }
    if (p)
    {
        last->next = p;
    }
    if (q)
    {
        last->next = q;
    }
}