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
    void display(struct node * p);
    display(first);
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
void display(struct node *p)
{
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}