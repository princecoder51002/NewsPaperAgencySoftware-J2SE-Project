#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node
{
    int data;
    struct node *lchild, *rchild, *nextRight;
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
        printf("Enter the value of lchild child: \n");
        scanf("%d", &x);

        if (x != -1)
        {
            t = (struct node *)malloc(sizeof(struct node));
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->lchild = t;
            enqueue(&q, t);
        }

        printf("Enter the value of rchild child: \n");
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

void ConnectNodes(struct node *p)
{
    struct Queue q;
    createQueue(&q,100);
    struct node *t;

    enqueue(&q,root);

    while(!isEmpty(q))
    {
       t = dequeue(&q);

       if(t -> lchild && t -> rchild)
       {
       t -> lchild -> nextRight = t -> rchild;
       enqueue(&q,t -> lchild);
       enqueue(&q, t -> rchild);
       }

       if(t -> lchild)
       enqueue(&q,t -> lchild);

       if(t -> rchild)
       enqueue(&q, t -> rchild);
    }
}

int main()
{

    treeCreate();
    void ConnectNodes(struct node *p);
    ConnectNodes(root);

    printf("Following are populated nextRight pointers in \n"
     "the tree (-1 is printed if there is no nextRight) \n");
    printf("nextRight of %d is %d \n", root->data,
     root->nextRight ? root->nextRight->data : -1);
    printf("nextRight of %d is %d \n", root->lchild->data,
     root->lchild->nextRight ? root->lchild->nextRight->data : -1);
    printf("nextRight of %d is %d \n", root->rchild->data,
     root->rchild->nextRight ? root->rchild->nextRight->data : -1);
    printf("nextRight of %d is %d \n", root->lchild->lchild->data,
     root->lchild->lchild->nextRight ? root->lchild->lchild->nextRight->data : -1);
    printf("nextRight of %d is %d \n", root->rchild->rchild->data,
     root->rchild->rchild->nextRight ? root->rchild->rchild->nextRight->data : -1);

    return 0;
}