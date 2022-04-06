#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *lchild, *rchild;
} *root = NULL;

struct Queue
{
    int size;
    int front;
    int rear;
    struct node **Q;
};

void createQueue(struct Queue *q, int size)
{
    q->size = size;
    q->front = q->rear = 0;
    q->Q = (struct node **)malloc(q->size * sizeof(struct node *));
}

void enqueue(struct Queue *q, struct node *x)
{
    if (q->rear == q->size - 1)
        printf("Queue is full");

    else
    {
        q->rear++;
        q->Q[q->rear] = x;
    }
}

struct node *dequeue(struct Queue *q)
{
    struct node *x = NULL;
    if (q->front == q->rear)
        printf("Queue is empty");

    else
    {
        q->front++;
        x = q->Q[q->front];
    }

    return x;
}

int isEmpty(struct Queue q)
{
    return q.front == q.rear;
}

void treeCreate()
{
    struct node *p, *t;
    int x;
    struct Queue q;
    createQueue(&q, 100);

    printf("Enter the root value: \n");
    scanf("%d", &x);

    root = (struct node *)malloc(sizeof(struct node));
    root->data = x;
    root->lchild = root->rchild = NULL;
    enqueue(&q, root);

    while (!isEmpty(q))
    {
        p = dequeue(&q);
        printf("Enter the value of left child: \n");
        scanf("%d", &x);

        if (x != -1)
        {
            t = (struct node *)malloc(sizeof(struct node));
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->lchild = t;
            enqueue(&q, t);
        }

        printf("Enter the value of right child: \n");
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

int max(int a, int b)
{
    return a >= b ? a : b;
}

int Maximum_Sum_Leaf(struct node *p, int *res)
{

    if (p == NULL)
        return 0;

    if (p->lchild == NULL && p->rchild == NULL)
        return p->data;

    int *temp = res;

    int ls = Maximum_Sum_Leaf(p->lchild, temp);
    int rs = Maximum_Sum_Leaf(p->rchild, temp);

    if (p->lchild && p->rchild)
    {
        *res = max(*res, ls + rs + p->data);

        return (max(ls, rs) + p->data);
    }

    return (!p->lchild) ? rs + p->data : ls + p->data;
}

int main()
{

    treeCreate();
    int res = 0;

    int Maximum_Sum_Leaf(struct node * p, int *res);
    int ans = Maximum_Sum_Leaf(root, &res);

    if (res == 0)
        printf("%d ", ans);
    else
        printf("%d ", res);

    return 0;
}