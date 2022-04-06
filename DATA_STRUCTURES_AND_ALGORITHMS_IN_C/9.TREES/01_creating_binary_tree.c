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
    printf("PREORDER TRAVERSAL IS:");
    preorder(root);
    printf("\n");
    printf("INORDER TRAVERSAL IS: ");
    inorder(root);
    printf("\n");
    printf("POSTORDER TRAVERSAL IS: ");
    postorder(root);

    return 0;
}

void preorder(struct node *p) // recursive function
{
    if (p)
    {
        printf("%d ", p->data);
        preorder(p->lchild);
        preorder(p->rchild);
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
void postorder(struct node *p) // recursive function
{
    if (p)
    {
        postorder(p->lchild);
        postorder(p->rchild);
        printf("%d ", p->data);
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