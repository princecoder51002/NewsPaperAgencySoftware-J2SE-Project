#include <stdio.h>

struct node
{
    int data;
    struct node *next;
} *first = NULL;

int main()
{
    int n, i, key;
    struct node *temp, *prince;
    printf("enter the no. of terms: \n");
    scanf("%d", &n);
    int a[n];
    printf("elements are: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter the element you want to search: \n");
    scanf("%d", &key);
    void create(int a[], int n);
    create(a, n);
    void search1(struct node * p, int key);
    search1(first, key);
    struct node *search2(struct node * p, int key);
    temp = search2(first, key);
    if (temp != NULL)
        printf("key %d is found at %d location\n", temp->data, temp);
    struct node *search3(struct node * p, int key);
    prince = search3(first, key);
    if (prince != NULL)
        printf("key %d is found at %d location\n", prince->data, prince);
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
void search1(struct node *p, int key)
{
    while (p != NULL)
    {
        if (key == p->data)
            printf("key %d is found at %d location\n", p->data, p);
        p = p->next;
    }
}

struct node *search2(struct node *p, int key) // recursively
{
    if (p == NULL)
        return NULL;
    if (key == p->data)
        return p;
    return search2(p->next, key);
}
struct node *search3(struct node *p, int key) // improving
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
