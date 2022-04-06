#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node 
{
    int data;
    struct node *lchild, *rchild;
}*root1 = NULL, *root2=NULL;

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

void treeCreate1()
{
    struct node *p, *t;
    int x;
    struct Queue q;
    createQueue(&q,100);

    printf("Enter the root value: \n");
    scanf("%d", &x);

    root1 = (struct node *)malloc(sizeof(struct node));
    root1 -> data = x;
    root1 -> lchild = root1 -> rchild = NULL;
    enqueue(&q,root1);

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

void treeCreate2()
{
    struct node *p, *t;
    int x;
    struct Queue q;
    createQueue(&q,100);

    printf("Enter the root value: \n");
    scanf("%d", &x);

    root2 = (struct node *)malloc(sizeof(struct node));
    root2 -> data = x;
    root2 -> lchild = root2 -> rchild = NULL;
    enqueue(&q,root2);

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

bool isIdentical(struct node *t, struct node *s)
{
    if(s==NULL && t==NULL)
    return true;

    if(t==NULL || s==NULL)
    return false;

    if((t -> data == s->data) && isIdentical(t -> lchild,s->lchild) && isIdentical(t -> rchild,s->rchild))
    return true;
    else 
    return false;
}

bool Sub_Tree(struct node *t, struct node *s)
{
     if(t == NULL)
     return false;

     if(s==NULL)
     return true;

     if(isIdentical(t,s))
     return true;

    //  return Sub_Tree(t -> lchild,s) || Sub_Tree(t -> rchild,s);

    if(Sub_Tree(t -> lchild,s))
    return true;

    if(Sub_Tree(t -> rchild,s))
    return true;

}


int main()
{

    treeCreate1();
    treeCreate2();

    bool Sub_Tree(struct node *t, struct node *s);
    bool ans = Sub_Tree(root1, root2);

    printf(ans ? "true" : "false");
    
    return 0;
}