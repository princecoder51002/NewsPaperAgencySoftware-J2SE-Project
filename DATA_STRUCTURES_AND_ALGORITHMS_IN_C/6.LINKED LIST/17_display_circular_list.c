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
    void rdisplay(struct node * p);
    create(a, n);
    display(head);
    printf("\n");
    rdisplay(head);
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
void rdisplay(struct node *p)
{
    static int flag = 0;
    if (p != head || flag == 0)
    {
        flag = 1;
        printf("%d ", p->data);
        rdisplay(p->next);
    }
    flag = 0;
}
