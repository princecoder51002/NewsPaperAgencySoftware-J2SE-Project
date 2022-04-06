#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *lchild;
    int data;
    struct node *rchild;
} *root = NULL; // globally accessible

int main()
{
    void insert(int key);
    void inorder(struct node * p);
    struct node *search(struct node * t, int key);
    struct node *rinsert(struct node * p, int key);
    struct node *delete (struct node * p, int key);
    root = rinsert(root, 28);
    rinsert(root, 56);
    insert(10);
    insert(20);
    insert(5);
    insert(8);
    insert(35);
    insert(32);
    delete (root, 8);
    delete (root, 28);
    delete (root, 35);
    delete (root, 20);

    inorder(root);
    printf("\n");
    struct node *k = search(root, 20);
    if (k != NULL)
        printf("element %d is found\n", k->data);
    else
        printf("element is not found\n");
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

struct node *rinsert(struct node *p, int key) // recursive insert
{
    struct node *t = NULL;

    if (p == NULL)
    {
        t = (struct node *)malloc(sizeof(struct node));
        t->data = key;
        t->lchild = t->rchild = NULL;
        return t;
    }
    if (key < p->data)
        p->lchild = rinsert(p->lchild, key);
    else if (key > p->data)
        p->rchild = rinsert(p->rchild, key);
    else
        return p;
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

struct node *search(struct node *t, int key) // for searching
{
    while (t != NULL)
    {
        if (key == t->data)
            return t;
        else if (key < t->data)
            t = t->lchild;
        else
            t = t->rchild;
    }
    return NULL;
}

int height(struct node *p) // for calculating height
{
    int x, y;
    if (p == NULL)
        return 0;
    x = height(p->lchild);
    y = height(p->rchild);
    return x > y ? x + 1 : y + 1;
}

struct node *inpre(struct node *p)
{
    while (p && p->rchild != NULL)
        p = p->rchild;
    return p;
}

struct node *insucc(struct node *p)
{
    while (p && p->lchild != NULL)
        p = p->lchild;
    return p;
}

struct node *delete (struct node *p, int key)
{
    struct node *q;

    if (p == NULL)
        return NULL;
    if (p->lchild == NULL && p->rchild == NULL)
    {
        if (p == root)
            root = NULL;
        free(p);
        return NULL;
    }
    if (key < p->data)
        p->lchild = delete (p->lchild, key);
    else if (key > p->data)
        p->rchild = delete (p->rchild, key);
    else
    {
        if (height(p->lchild) > height(p->rchild))
        {
            q = inpre(p->lchild); // calling recursively
            p->data = q->data;
            p->lchild = delete (p->lchild, q->data);
        }
        else
        {
            q = insucc(p->rchild); // calling recursively
            p->data = q->data;
            p->rchild = delete (p->rchild, q->data);
        }
    }
    return p;
}