#include <stdio.h>

#include <stdlib.h>

struct node
{
    struct node *lchild;
    int data;
    struct node *rchild;
};
struct stack
{
    int size;
    int top;
    long int *s;
};
struct queue
{
    int size;
    int front;
    int rear;
    struct node **Q; // *Q is for array and **Q is for type of node
};

struct node *root = NULL;

void stackcreate(struct stack *st, int size)
{
    st->size = size;
    st->top = -1;
    st->s = (long int *)malloc(st->size * sizeof(long int));
}

void push(struct stack *st, long int x)
{
    if (st->top == st->size - 1)
        printf("stack overflown\n");
    else
    {
        st->top++;
        st->s[st->top] = x;
    }
}

long int pop(struct stack *st)
{
    long int x = -1;
    if (st->top == -1)
        printf("stack underflown\n");
    else
    {
        x = st->s[st->top--];
    }
    return x;
}

int isemptystack(struct stack st)
{
    if (st.top == -1)
        return 1;
    return 0;
}
int isfullstack(struct stack st)
{
    if (st.top == st.size - 1)
        return 1;
    return 0;
}
void preorder1(struct node *p) // recursive function
{
    struct stack st;
    stackcreate(&st, 100);

    while (p || !isemptystack(st))
    {
        if (p != NULL)
        {
            printf("%d ", p->data);
            push(&st, p);
            p = p->lchild;
        }
        else
        {
            p = pop(&st);
            p = p->rchild;
        }
    }
}
void inorder(struct node *p) // recursive function
{
    struct stack st;
    stackcreate(&st, 100);

    while (p || !isemptystack(st))
    {
        if (p != NULL)
        {
            push(&st, p);
            p = p->lchild;
        }
        else
        {
            p = pop(&st);
            printf("%d ", p->data);
            p = p->rchild;
        }
    }
}
void postorder1(struct node *p) // recursive function
{
    struct stack st;
    stackcreate(&st, 50);
    long int temp; // for storing negative address
    while (p != NULL || !isemptystack(st))
    {
        if (p != NULL)
        {
            push(&st, (long int)p);
            p = p->lchild;
        }
        else
        {
            temp = pop(&st);
            if (temp > 0)
            {
                push(&st, -temp);
                p = ((struct node *)temp)->rchild;
            }
            else
            {
                printf("%d ", ((struct node *)-temp)->data);
                p = NULL;
            }
        }
    }
}

void create(struct queue *q, int size)
{
    q->size = size;
    q->front = q->rear = 0;
    q->Q = (struct node **)malloc(q->size * sizeof(struct node *));
}
void enqueue(struct queue *q, struct node *x)
{
    if (q->rear == q->size - 1)
        printf("queue is full");
    else
    {
        q->rear++;
        q->Q[q->rear] = x;
    }
}
struct node *dequeue(struct queue *q)
{
    struct node *x = NULL;
    if (q->front == q->rear)
        printf("queue is empty");
    else
    {
        q->front++;
        x = q->Q[q->front];
    }
    return x;
}

int isempty(struct queue q)
{
    return q.front == q.rear; // if q.front=q.rear then it will return true otherwise false
}

void levelorder(struct node *p)
{
    struct queue q;
    create(&q, 100);

    printf("%d ", p->data);
    enqueue(&q, p);

    while (!isempty(q))
    {
        p = dequeue(&q);
        if (p->lchild)
        {
            printf("%d ", p->lchild->data);
            enqueue(&q, p->lchild);
        }
        if (p->rchild)
        {
            printf("%d ", p->rchild->data);
            enqueue(&q, p->rchild);
        }
    }
}

void treecreate()
{
    struct node *p, *t;
    int x;
    struct queue q;
    create(&q, 100);

    printf("enter the root value: \n");
    scanf("%d", &x);
    root = (struct node *)malloc(sizeof(struct node));
    root->data = x;
    root->lchild = root->rchild = NULL;
    enqueue(&q, root);

    while (!isempty(q))
    {
        p = dequeue(&q);
        printf("enter left child of %d: \n", p->data);
        scanf("%d", &x);
        if (x != -1)
        {
            t = (struct node *)malloc(sizeof(struct node));
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->lchild = t;
            enqueue(&q, t);
        }

        printf("enter right child of %d: \n", p->data);
        scanf("%d", &x);
        if (x != -1)
        {
            t = (struct node *)malloc(sizeof(struct node));
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->rchild = t;
            enqueue(&q, t);
        }
    }
}

int main()
{
    treecreate();
    printf("PREORDER TRAVERSAL IS:");
    preorder1(root);
    printf("\n");
    printf("INORDER TRAVERSAL IS: ");
    inorder(root);
    printf("\n");
    printf("POSTORDER TRAVERSAL IS: ");
    postorder1(root);
    printf("LEVELORDER TRAVERSAL IS: ");
    levelorder(root);

    return 0;
}