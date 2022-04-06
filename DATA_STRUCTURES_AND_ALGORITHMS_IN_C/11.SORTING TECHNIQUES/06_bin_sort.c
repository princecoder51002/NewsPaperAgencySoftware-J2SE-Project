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
    void binsort(int a[], int n);

    binsort(a, n);

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

void binsort(int a[], int n)
{
    int max, i, j;
    struct node **bins;

    max = 0;
    for (i = 0; i < n; i++)
    {
        if (max < a[i])
            max = a[i];
    }

    bins = (struct node **)malloc((max + 1) * sizeof(struct node *));

    for (i = 0; i < max + 1; i++)
    {
        bins[i] = NULL;
    }

    for (i = 0; i < n; i++)
    {
        insert(&bins[a[i]], a[i]);
    }

    int m = 0, w = 0;

    while (m < max + 1)
    {
        while (bins[m] != NULL)
        {
            a[w++] = delete (&bins[m]);
        }
        m++;
    }
}
