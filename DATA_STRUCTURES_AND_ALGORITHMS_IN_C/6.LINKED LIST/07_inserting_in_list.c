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
    void display(struct node * p);
    void insert(struct node * p, int index, int x);
    create(a, n);
    display(first);
    printf("\n after insertion\n");
    insert(first, 0, 10);
    display(first);
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
void display(struct node *p)
{
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}
int count(struct node *p)
{

    if (p != NULL)
        return count(p->next) + 1;
    else
        return 0;
}
void insert(struct node *p, int index, int x)
{
    struct node *t;
    int i;
    if (index < 0 || index > count(p))
        return;
    t = (struct node *)malloc(sizeof(struct node));
    t->data = x;
    if (index == 0)
    {
        t->next = first;
        first = t;
    }
    else
    {
        for (i = 0; i < index - 1 && p; i++)
        {
            p = p->next;
        }
        t->next = p->next;
        p->next = t;
    }
}