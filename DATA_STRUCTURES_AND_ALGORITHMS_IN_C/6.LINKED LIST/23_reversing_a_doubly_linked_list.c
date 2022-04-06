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
    void reverse(struct node *p);
    create(a,n);
    display(first);
    printf("\nafter reversal:\n");
    reverse(first);
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
void reverse(struct node *p)
{
    struct node *temp;
    p=first;
    while(p)
    {
        temp=p->next;
        p->next=p->prev;
        p->prev=temp;
        p=p->prev;
        if(p!=NULL && p->next==NULL)
        first=p;
    }
}