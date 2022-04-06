#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} *first = NULL;

int main()
{

    int i, n;
    printf("Enter the no. of elements: \n");
    scanf("%d", &n);

    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int count = 0;
    int max = -1;
    for (i = 0; i < n; i++)
    {
        if (max < a[i])
            max = a[i];
    }

    while (max != 0)
    {
        max = max / 10;
        count++;
    }

    int g = 1;
    void binsort(int a[], int n, int g);

    for (i = 0; i < count; i++)
    {
        binsort(a, n, g);
        g = g * 10;
    }

    for (i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}

void insert(struct node **p, int x)
{
    struct node *t, *q = NULL, *h = *p;
    t = (struct node *)malloc(sizeof(struct node));
    t->data = x;
    t->next = NULL;
    if (*p == NULL) // if list is empty
        *p = t;
    else
    {
        q = h;
        while (q->next != NULL)
        {
            q = q->next;
        }
        q->next = t;
        q = t;
    }
}

int delete (struct node **p)
{
    struct node *q = *p;
    int x = q->data;
    (*p) = (*p)->next;
    free(q);
    return x;
}

void binsort(int a[], int n, int g)
{
    int i, j;
    struct node **bins;

    bins = (struct node **)malloc(10 * sizeof(struct node *));

    for (i = 0; i < 10; i++)
    {
        bins[i] = NULL;
    }

    for (i = 0; i < n; i++)
    {
        insert(&bins[(a[i] / g) % 10], a[i]);
    }

    int m = 0, w = 0;

    while (m < 10)
    {
        while (bins[m] != NULL)
        {
            a[w++] = delete (&bins[m]);
        }
        m++;
    }
}
