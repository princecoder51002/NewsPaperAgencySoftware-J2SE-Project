#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node *lchild, *rchild;
}*root = NULL;

struct Queue
{
    int size;
    int front;
    int rear;
    struct node **Q;
};

void createQueue(struct Queue *q, int size)
{
   q -> size = size;
   q -> front = q -> rear = 0;
   q -> Q = (struct node **)malloc(q -> size*sizeof(struct node *));
}

void enqueue(struct Queue *q, struct node *x)
{
   if(q -> rear == q -> size -1)
   printf("Queue is full");

   else 
   {
       q -> rear++;
       q -> Q[q -> rear] = x;
   }
}

struct node *dequeue(struct Queue *q)
{
    struct node *x = NULL;
    if(q -> front == q -> rear)
    printf("Queue is empty");

    else 
    {
        q -> front++;
        x = q -> Q[q -> front];
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
    createQueue(&q,100);

    printf("Enter the root value: \n");
    scanf("%d", &x);

    root = (struct node *)malloc(sizeof(struct node));
    root -> data = x;
    root -> lchild = root -> rchild = NULL;
    enqueue(&q,root);

    while(!isEmpty(q))
    {
       p = dequeue(&q);
       printf("Enter the value of left child: \n");
       scanf("%d", &x);

       if(x!=-1)
       {
           t = (struct node *)malloc(sizeof(struct node));
           t -> data = x;
           t -> lchild = t -> rchild = NULL;
           p -> lchild = t;
           enqueue(&q, t);
       }

       printf("Enter the value of right child: \n");
       scanf("%d", &x);

       if(x!=-1)
       {
           t = (struct node *)malloc(sizeof(struct node));
           t -> data = x;
           t -> lchild = t -> rchild = NULL;
           p -> rchild = t;
           enqueue(&q, t);
       }
    }
}

void preorder(struct node *p)
{
    if(p)
    {
        printf("%d ", p -> data);
        preorder(p -> lchild);
        preorder(p -> rchild);
    }

}

void inorder(struct node *p)
{
    if(p)
    {
        inorder(p -> lchild);
        printf("%d ", p -> data);
        inorder(p -> rchild);
    }
}

void postorder(struct node *p)
{
    if(p)
    {
        postorder(p -> lchild);
        postorder(p -> rchild);
        printf("%d ", p -> data);
    }

}

void levelOrder(struct node *p)
{
    struct Queue q;
    createQueue(&q,100);

    printf("%d ", p -> data);
    enqueue(&q,p);

    while(!isEmpty(q))
    {
        p = dequeue(&q);

        if(p -> lchild)
        {
            printf("%d ", p->lchild->data);
            enqueue(&q,p-> lchild);
        }

        if(p->rchild)
        {
            printf("%d ", p->rchild->data);
            enqueue(&q,p-> rchild);
        }
    }
}

int main()
{

    treeCreate();

    preorder(root);
    inorder(root);
    postorder(root);
    levelOrder(root);

    return 0;
}