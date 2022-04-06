#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node 
{
    struct node *lchild;
    int data;
    struct node *rchild;
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

int main()
{
    
    treeCreate();

    void Incheck(struct node *p);
    Incheck(root);

    void Swap(struct node *t);
    Swap(root);

    Incheck(root);
    

    return 0;
}

void Incheck(struct node *p)
{
    if(p!=NULL)
    {
        Incheck(p -> lchild);
        printf("%d ", p->data);
        Incheck(p -> rchild);
    }
}

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void Swap(struct node *t)
{
     struct node *prev = NULL, *first = NULL, *last = NULL, *middle = NULL;

     void Swap_Numbers(struct node *t, struct node **first, struct node **middle, struct node **last, struct node **prev);

     Swap_Numbers(root,&first,&middle,&last, &prev);

     if(first && last)
     swap(&(first -> data), &(last -> data));
     else if(first && middle)
     swap(&(first -> data), &(middle -> data));
}

void Swap_Numbers(struct node *t, struct node **first, struct node **middle, struct node **last, struct node **prev)
{

     if(t)
     {

     Swap_Numbers(t -> lchild,first,middle,last,prev);

     if(*prev && (*prev)->data > t->data)
     {
            if(!*first)
            {
                *first = *prev;
                *middle = t;
            }

            else
            *last = t;
     }

     *prev = t;

     Swap_Numbers(t -> rchild,first,middle,last,prev);

     }
}