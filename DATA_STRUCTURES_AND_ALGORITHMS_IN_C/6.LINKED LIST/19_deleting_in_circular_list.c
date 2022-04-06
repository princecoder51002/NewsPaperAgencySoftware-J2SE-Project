#include <stdio.h>

struct node
{
    int data;
    struct node *next;
} *head = NULL;

int main()
{
    int n, i;
    printf("enter number of elements: \n");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    void create(int a[], int n);
    void display(struct node * p);
    int delete (struct node * p, int index);
    create(a, n);
    printf("deleted element: %d\n", (delete (head, 5)));
    display(head);
}
void create(int a[], int n)
{
    int i;
    struct node *t, *last;
    head = (struct node *)malloc(sizeof(struct node));
    head->data = a[0];
    head->next = head;
    last = head;
    for (i = 1; i < n; i++)
    {
        t = (struct node *)malloc(sizeof(struct node));
        t->data = a[i];
        t->next = last->next;
        last->next = t;
        last = t;
    }
}
void display(struct node *p)
{
    do
    {
        printf("%d ", p->data);
        p = p->next;
    } while (p != head);
}
int delete (struct node *p, int index)
{
    struct node *q;
    int i, x;
    if (index == 1)
    {
        p = head;
        while (p->next != head)
            p = p->next;
        x = head->data;
        if (head == p) // first and last node
        {
            free(head);
            head = NULL;
        }
        else
        {
            p->next = head->next;
            free(head);
            head = p->next;
        }
    }
    else
    {
        for (i = 0; i < index - 2; i++)
        {
            p = p->next;
        }
        q = p->next;
        p->next = q->next;
        x = q->data;
        free(q);
    }
    return x;
}