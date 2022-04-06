#include <stdio.h>
#include <stdlib.h>
#define SIZE(arr) (sizeof(arr)/sizeof(arr[0]))

struct node 
{
    int data;
    struct node *next;
    struct node *down;
}*first = NULL;

void push(struct node** headRef, int data)
{
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node));
 
    newNode->data = data;
    newNode->next = NULL;
    newNode->down = *headRef;
    *headRef = newNode;
}

void createVerticalList(struct node **head, int arr[], int n)
{
    for (int i = 0; i < n; i++) {
        push(head, arr[i]);
    }
}

int main()
{

    int arr1[] = { 8, 6, 4, 1 };
    int arr2[] = { 7, 3, 2 };
    int arr3[] = { 9, 5 };
    int arr4[] = { 12, 11, 10 };
 
    createVerticalList(&(first), arr1, SIZE(arr1));
    createVerticalList(&(first->next), arr2, SIZE(arr2));
    createVerticalList(&(first->next->next), arr3, SIZE(arr3));
    createVerticalList(&(first->next->next->next), arr4, SIZE(arr4));

    void flatten(struct node **first);
    flatten(&first);

    void display(struct node *p);
    display(first);

    return 0;
}

void display(struct node *p)
{
    while(p!=NULL)
    {
        printf("%d ", p->data);
        p = p->down;
    }
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
        answer->down = Merge(a->down, b);
    }

    else
    {
        answer = b;
        answer->down = Merge(a, b->down);
    }
    answer -> next = NULL;
    return answer;
}

void flatten(struct node **first)
{
    struct node *temp = *first;
    struct node *temp1 = temp -> next;

    if((temp == NULL ) || (temp -> next == NULL))
    return;

    flatten(&temp1);

    *first = Merge(temp, temp -> next);
}