#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} *first = NULL;

int main()
{

    struct node *h[10];
    int i;

    struct node *temp;

    for (i = 0; i < 10; i++)
    {
        h[i] = NULL;
    }

    void insert(struct node * h[], int key);

    insert(h, 12);
    insert(h, 22);
    insert(h, 42);

    struct node *search(struct node * p, int key);
    int hash(int key);

    temp = search(h[hash(22)], 22);

    printf("%d ", temp->data);
    return 0;
}

int hash(int key)
{
    return key % 10;
}

void insert(struct node *h[], int key)
{
    int hash(int key);
    int index = hash(key);

    void sortedinsert(struct node * *p, int x);

    sortedinsert(&h[index], key);
}

void sortedinsert(struct node **p, int x)
{
    struct node *t, *q = NULL, *h = *p;
    t = (struct node *)malloc(sizeof(struct node));
    t->data = x;
    t->next = NULL;
    if (*p == NULL) // if list is empty
        *p = t;
    else
    {
        while (h && h->data < x)
        {
            q = h;
            h = h->next;
        }
        if (h == *p) // if inserted node is less than first node data , then put it on the lest side of first node
        {
            t->next = *p;
            *p = t;
        }
        else
        {
            t->next = q->next;
            q->next = t;
        }
    }
}

struct node *search(struct node *p, int key) // improving
{
    struct node *q = NULL;
    while (p != NULL)
    {
        if (key == p->data)
        {
            q->next = p->next;
            p->next = first;
            first = p;
            return first;
        }
        q = p;
        p = p->next;
    }
}