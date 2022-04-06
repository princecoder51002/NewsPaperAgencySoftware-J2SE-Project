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
    int count(struct node * p);
    int c = count(first);
    printf("count : %d", c);
    int count1(struct node * p);
    int m = count1(first);
    printf("count : %d", m);

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
int count(struct node *p)
{

    if (p != NULL)
        return count(p->next) + 1;
    else
        return 0;
}
int count1(struct node *p)
{
    int c = 0;
    while (p != NULL)
    {
        c++;
        p = p->next;
    }
    return c;
}
