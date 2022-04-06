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
    root = rinsert(root,29);

    void insert(int key);
    insert(-13);
    insert(14);
    insert(-8);
    insert(13);
    insert(15);
    insert(7);

    void inDelete(struct node *p);
    inDelete(root);

    void inorder(struct node *p);
    inorder(root);
    

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

int height(struct node *p)
{
    int x, y;
    if(p==NULL)
    return 0;

    x = height(p -> lchild);
    y = height(p -> rchild);

    return x > y ? x+1 : y+1;
}

struct node *inPre(struct node *p)
{
    while(p && p -> rchild!=NULL)
    p = p->rchild;

    return p;
}

struct node *inSucc(struct node *p)
{
    while(p && p -> lchild !=NULL)
    p = p->lchild;

    return p;
}

struct node *delete(struct node *p, int key)
{
    struct node *q;

    if(p==NULL)
    return NULL;

    if(p -> lchild == NULL && p -> rchild == NULL)
    {
        if(p == root)
        root = NULL;

        free(p);
        return NULL;
    }

    if(key > p->data)
    p -> rchild = delete(p -> rchild, key);

    else if(key < p->data)
    p -> lchild = delete(p -> lchild, key);

    else 
    {
        if(height(p -> lchild) > height(p -> rchild))
        {
             q = inPre(p -> lchild);
             p -> data = q -> data;
             p -> lchild = delete(p -> lchild, q -> data);
        }

        else 
        {
             q = inSucc(p -> rchild);
             p -> data = q -> data;
             p -> rchild = delete(p -> rchild, q -> data);
        }
    }

    return p;
}

void inDelete(struct node *p)
{
    while(p!=NULL)
    {
         inDelete(p -> lchild);

         if(p -> data >=-10 && p -> data <= 13)
         {
             delete(root,p->data);
         }

         inDelete(p -> rchild);
    }
}

void inorder(struct node *p)
{
    while(p!=NULL)
    {
        inorder(p -> lchild);
        printf("%d ", p->data);
        inorder(p -> rchild);
    }
}

