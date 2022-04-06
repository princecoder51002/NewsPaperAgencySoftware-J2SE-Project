#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} *first = NULL;

int main()
{
    int n;
    printf("Enter no. of elements: \n");
    scanf("%d", &n);

    int A[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    void create_linked_list(int A[], int n);
    create_linked_list(A, n);

    void Merge_Sort(struct node * *first);
    Merge_Sort(&first);

    void display(struct node * p);
    display(first);

    return 0;
}

void display(struct node *p)
{
    while (p)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}

void create_linked_list(int A[], int n)
{
    struct node *t, *last;
    first = (struct node *)malloc(sizeof(struct node));
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (int i = 1; i < n; i++)
    {
        t = (struct node *)malloc(sizeof(struct node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void findMiddle(struct node *first, struct node **a, struct node **b)
{
    struct node *slow = first;
    struct node *fast = first->next;

    while (fast)
    {
        fast = fast->next;
        if (fast)
        {
            slow = slow->next;
            fast = fast->next;
        }
    }

    *a = first;
    *b = slow->next;

    slow->next = NULL;
}

struct node *Merge(struct node *a, struct node *b)
{
    struct node *answer = NULL;

    if (a == NULL)
        return b;

    else if (b == NULL)
        return a;

    if (a->data <= b->data)
    {
        answer = a;
        answer->next = Merge(a->next, b);
    }

    else
    {
        answer = b;
        answer->next = Merge(a, b->next);
    }

    return answer;
}

void Merge_Sort(struct node **first)
{
    struct node *a, *b;

    struct node *temp = *first;

    if ((temp == NULL) || (temp->next == NULL))
        return;

    findMiddle(temp, &a, &b);

    Merge_Sort(&a);
    Merge_Sort(&b);

    *first = Merge(a, b);
}