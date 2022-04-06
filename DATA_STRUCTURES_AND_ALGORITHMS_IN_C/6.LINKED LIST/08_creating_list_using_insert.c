#include <stdio.h>

struct node
{
    int data;
    struct node *next;
} *first = NULL;

int main()
{

    void display(struct node * p);
    void insert(struct node * p, int index, int x);
    printf("\n after insertion\n");
    insert(first, 0, 10);
    insert(first, 1, 5);
    display(first);
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