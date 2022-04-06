#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} *top = NULL;

int main()
{
    void display();
    void push(int x);
    int pop();
    int peek(int index);

    push(10);
    push(20);
    push(30);

    display();

    printf("%d ", pop());

    printf("%d ", peek(2));
    return 0;
}

void push(int x)
{
    struct node *t;
    t = (struct node *)malloc(sizeof(struct node));

    if (t == NULL)
        printf("stack is full\n");
    else
    {
        t->data = x;
        t->next = top;
        top = t;
    }
}

int pop()
{
    struct node *t;
    int x = -1;
    if (top == NULL)
        printf("stack is empty\n");
    else
    {
        t = top;
        top = top->next;
        x = t->data;
        free(t);
    }
    return x;
}

void display()
{
    struct node *p;
    p = top;
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

int peek(int index)
{
    int i;
    struct node *p = top;
    for (i = 0; p != NULL && i < index - 1; i++)
        p = p->next;

    if (p != NULL)
        return p->data;
    else
        return -1;
}