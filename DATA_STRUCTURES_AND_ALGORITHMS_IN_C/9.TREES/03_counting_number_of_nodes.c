#include <stdio.h>

struct node
{
    struct node *lchild;
    int data;
    struct node *rchild;
};
struct queue
{
    int size;
    int front;
    int rear;
    struct node **Q; // *Q is for array and **Q is for type of node
};

struct node *root = NULL;
int main()
{
    treecreate();
    int m = count(root);
    int n = height(root);
    int p = countnodewithdegree2(root);
    int l = leafnodes(root);
    int h = countnodeswithdegree1(root);

    printf("total no. of nodes : %d\n", m);
    printf("height of tree : %d\n", n - 1);
    printf("No. of nodes with degree two : %d\n", p);
    printf("No. of leaf nodes : %d\n", l);
    printf("No. of nodes with degree one : %d\n", h);

    return 0;
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

int count(struct node *p) // for counting total no. of nodes
{

    if (p)
        return count(p->lchild) + count(p->rchild) + 1;
    else
        return 0;
}

int height(struct node *p) // for height of a tree
{
    int x = 0, y = 0;

    if (p == 0)
        return 0;
    x = height(p->lchild);
    y = height(p->rchild);

    if (x > y)
        return x + 1;
    else
        return y + 1;
}

int countnodewithdegree2(struct node *p) // for counting nodes with degree tow
{
    int x, y;
    if (p != NULL)
    {
        x = countnodewithdegree2(p->lchild);
        y = countnodewithdegree2(p->rchild);

        if (p->lchild && p->rchild)
        {
            return x + y + 1;
        }
        else
            return x + y;
    }
    else
        return 0;
}

int leafnodes(struct node *p) // for counting leaf nodes
{
    int x, y;
    if (p != NULL)
    {
        x = leafnodes(p->lchild);
        y = leafnodes(p->rchild);

        if (p->lchild == 0 && p->rchild == 0)
        {
            return x + y + 1;
        }
        else
            return x + y;
    }
    else
        return 0;
}

int countnodeswithdegree1(struct node *p) // for counting nodes with degree one
{
    int x, y;
    if (p != NULL)
    {
        x = countnodeswithdegree1(p->lchild);
        y = countnodeswithdegree1(p->rchild);

        if (p->lchild != NULL ^ p->rchild != NULL) // it means if(p->lchild!=NULL && p->rchild==NULL || p->lchild==NULL && p->rchild!=NULL )
        {
            return x + y + 1;
        }
        else
            return x + y;
    }
    else
        return 0;
}
