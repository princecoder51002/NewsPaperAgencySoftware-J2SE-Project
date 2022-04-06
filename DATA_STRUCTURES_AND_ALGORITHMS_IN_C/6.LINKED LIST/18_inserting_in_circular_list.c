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
    void insert(struct node * p, int index, int x);

    create(a, n);
    insert(head, 4, 23);
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

void insert(struct node *p, int index, int x)
{
    struct node *t;
    int i;
    if (index == 0)
    {
        t = (struct node *)malloc(sizeof(struct node));
        t->data = x;
        if (head == NULL)
        {
            head = t;
            head->next = head;
        }
        else
        {
            while (p->next != head)
            {
                p = p->next;
            }
            p->next = t;
            t->next = head;
            head = t;
        }
    }
    else
    {
        for (i = 0; i < index - 1; i++)
        {
            p = p->next;
        }
        t = (struct node *)malloc(sizeof(struct node));
        t->data = x;
        t->next = p->next;
        p->next = t;
    }
}
