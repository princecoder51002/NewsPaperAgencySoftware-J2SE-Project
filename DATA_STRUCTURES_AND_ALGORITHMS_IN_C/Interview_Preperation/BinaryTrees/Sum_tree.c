#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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

int sum(struct node *p)
{
    if(p==NULL)
    return 0;
    else 
    return p->data + sum(p -> lchild)+ sum(p->rchild);
}

bool Check_Sum(struct node *p)
{
    if(p==NULL || p -> lchild == NULL && p -> rchild == NULL )
    return  true;

    int x = sum(p->lchild);
    int y = sum(p->rchild);

    if((x+y == p -> data) && (Check_Sum(p -> lchild)) && (Check_Sum(p -> rchild)))
    return true;

    return false;
}

int main()
{

    treeCreate();
    bool Check_Sum(struct node *p);
    bool ans = Check_Sum(root);

    printf(ans ? "true" : "false");

    return 0;
}