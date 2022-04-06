#include <stdio.h>

struct node
{
    struct node *prev;
    int data;
    struct node *next;
} *first = NULL;
int main()
{
    int n, i;
    printf("enter no. of elements: \n");
    scanf("%d", &n);
    int a[n];
    printf("elements are: \n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    void display(struct node * p);
    int length(struct node * p);
    void insert(struct node * p, int index, int x);
    create(a, n);
    printf("\nlength is :%d\n", length(first));
    display(first);
    printf("\n");
    printf("after insertion\n");
    insert(first, 4, 10);
    display(first);

    return 0;
}
void create(int a[], int n)
{
    struct node *t, *last;
    int i;
    first = (struct node *)malloc(sizeof(struct node));
    first->data = a[0];
    first->prev = first->next = NULL;
    last = first;

    for (i = 1; i < n; i++)
    {
        t = (struct node *)malloc(sizeof(struct node));
        t->data = a[i];
        t->next = last->next;
        t->prev = last;
        last->next = t;
        last = t;
    }
}
void display(struct node *p)
{
    while (p)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}
int length(struct node *p)
{
    int len = 0;
    while (p)
    {
        len++;
        p = p->next;
    }
    return len;
}

void insert(struct node *p, int index, int x)
{
    struct node *t;
    int i;
    if (index < 0 || index > length(p))
        return;
    if (index == 0)
    {
        t = (struct node *)malloc(sizeof(struct node));
        t->data = x;
        t->prev = NULL;
        t->next = first;
        first->prev = t;
        first = t;
    }
    else
    {
        for (i = 0; i < index - 1; i++)
        {
            p = p->next;
        }
        t = (struct node *)malloc(sizeof(struct node));
        t->data = x;

        t->prev = p;
        t->next = p->next;
        if (p->next) // conditional but mandotary
            p->next->prev = t;
        p->next = t;
    }
}