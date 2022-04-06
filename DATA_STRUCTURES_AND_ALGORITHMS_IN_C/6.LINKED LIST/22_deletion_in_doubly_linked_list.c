#include <stdio.h>
#include <stdlib.h>

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
    void create(int a[], int n);
    int length(struct node * p);
    void delete (struct node * p, int index);
    create(a, n);
    printf("\nlength is :%d\n", length(first));
    display(first);
    printf("\n");
    printf("after deletion\n");
    delete (first, 1);
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
void delete (struct node *p, int index)
{
    struct node *q;
    int x = -1, i;
    if (index < 1 || index > length(p))
        return;
    if (index == 1)
    {
        q = first;
        first = first->next;
        x = q->data;
        free(q);
        if (first != NULL)
            first->prev = NULL;
    }
    else
    {
        q = first;
        for (i = 0; i < index - 1; i++)
        {
            q = q->next;
        }
        q->prev->next = q->next;
        if (q->next != NULL)
        {
            q->next->prev = q->prev;
        }
        x = q->data;
        free(q);
    }
}