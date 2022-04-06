#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *lchild;
    int data;
    struct node *rchild;
} *root = NULL;

struct stack
{
    int size;
    int top;
    struct node **s;
};

int main()
{

    int n, i;
    printf("size of an array: \n");
    scanf("%d", &n);
    int pre[n];
    void createpre(int pre[], int n);
    void inorder(struct node * p);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &pre[i]);
    }

    createpre(pre, n);
    inorder(root);
    return 0;
}

void stackcreate(struct stack *st, int size)
{
    st->size = size;
    st->top = -1;
    st->s = (struct node **)malloc(st->size * sizeof(struct node *));
}

void push(struct stack *st, struct node *x)
{
    if (st->top == st->size - 1)
        printf("stack overflown\n");
    else
    {
        st->top++;
        st->s[st->top] = x;
    }
}

struct node *pop(struct stack *st)
{
    struct node *x;
    if (st->top == -1)
        printf("stack underflown\n");
    else
    {
        x = st->s[st->top--];
    }
    return x;
}

int isempty(struct stack st)
{
    if (st.top == -1)
        return 1;
    return 0;
}

struct node *stacktop(struct stack st)
{
    if (!isempty(st))
    {
        return st.s[st.top];
    }
    return NULL;
}

void createpre(int pre[], int n)
{
    struct stack st;
    stackcreate(&st, 100);
    struct node *t, *p;
    int i = 0;
    root = (struct node *)malloc(sizeof(struct node));
    root->data = pre[i++];
    root->lchild = root->rchild = NULL;
    t = root;

    while (i < n)
    {
        if (pre[i] < t->data)
        {
            p = (struct node *)malloc(sizeof(struct node));
            p->data = pre[i++];
            p->lchild = p->rchild = NULL;
            t->lchild = p;
            push(&st, t);
            t = p;
        }
        else
        {
            if (pre[i] > t->data && pre[i] < (isempty(st) ? 32767 : stacktop(st)->data))
            {
                p = (struct node *)malloc(sizeof(struct node));
                p->data = pre[i++];
                p->lchild = p->rchild = NULL;
                t->rchild = p;
                t = p;
            }
            else
                t = pop(&st);
        }
    }
}

void inorder(struct node *p) // recursive function
{
    if (p)
    {
        inorder(p->lchild);
        printf("%d ", p->data);
        inorder(p->rchild);
    }
}