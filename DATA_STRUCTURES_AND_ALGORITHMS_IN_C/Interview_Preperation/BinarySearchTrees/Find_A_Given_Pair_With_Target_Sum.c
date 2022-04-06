#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node 
{
    struct node *lchild;
    int data;
    struct node *rchild;
}*root = NULL;

int main()
{
    struct node *rinsert(struct node *p, int x);
    root = rinsert(root,15);

    void insert(int key);
    insert(10);
    insert(20);
    insert(8);
    insert(12);
    insert(25);
    insert(16);
    

    void Incheck(struct node *p);
    Incheck(root);

    int hash[200] = {0};

    bool check_sum(struct node *p, int sum, int hash[]);
    bool ans = check_sum(root,39,hash);

    if(ans)
    printf("yes");
    else 
    printf("NO");

    return 0;
}

void insert(int key) // iterative insertion
{
    struct node *t = root;
    struct node *r, *p;

    if (root == NULL) // if there is no node
    {
        p = (struct node *)malloc(sizeof(struct node));
        p->data = key;
        p->lchild = p->rchild = NULL;
        root = p;
        return;
    }
    while (t != NULL)
    {
        r = t;
        if (key < t->data)
            t = t->lchild;
        else if (key > t->data)
            t = t->rchild;
        else
            return;
    }
    p = (struct node *)malloc(sizeof(struct node));
    p->data = key;
    p->lchild = p->rchild = NULL;
    if (key < r->data)
        r->lchild = p;
    else if (key > r->data)
        r->rchild = p;
}

struct node *rinsert(struct node *p, int x)
{
    struct node *t;
    if(p==NULL)
    {
        t = (struct node *)malloc(sizeof(struct node));
        t -> data = x;
        t -> lchild = t-> rchild = NULL;
        return t;
    }

    else if(x > p -> data)
    {
         p -> rchild = rinsert(p -> rchild,x);
    }

    else if(x < p -> data)
    {
        p -> lchild = rinsert(p -> lchild, x);
    }

    else 
    return p;
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

bool check_sum(struct node *p, int sum, int hash[])
{
   if(p==NULL)
   return false;

   if(check_sum(p -> lchild, sum, hash))
   return true;

   hash[p -> data] = 1;

   for(int i = 0;i<200;i++)
   {
       if(hash[sum - p->data] == 1)
       return true;
   }

   return check_sum(p -> rchild,sum,hash);

   return false;
}