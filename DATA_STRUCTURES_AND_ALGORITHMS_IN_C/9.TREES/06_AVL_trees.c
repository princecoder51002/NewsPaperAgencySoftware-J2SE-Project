#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *lchild;
    int data;
    int height; // height of every node to calculate balance factor of every node
    struct node *rchild;
} *root = NULL;

int nodeheight(struct node *p)
{
    int hl, hr;
    hl = p && p->lchild ? p->lchild->height : 0;
    hr = p && p->rchild ? p->rchild->height : 0;

    return hl > hr ? hl + 1 : hr + 1;
}

int balancefactor(struct node *p)
{
    int hl, hr;
    hl = p && p->lchild ? p->lchild->height : 0;
    hr = p && p->rchild ? p->rchild->height : 0;

    return hl - hr;
}

struct node *LLrotation(struct node *p)
{
    struct node *pl = p->lchild;
    struct node *plr = pl->rchild;

    pl->rchild = p;
    p->lchild = plr;

    p->height = nodeheight(p);
    pl->height = nodeheight(pl);

    if (root == p)
        root = pl;

    return pl;
}

struct node *LRrotation(struct node *p)
{
    struct node *pl = p->lchild;
    struct node *plr = pl->rchild;

    pl->rchild = plr->lchild;
    p->lchild = plr->rchild;
    plr->rchild = p;
    plr->lchild = pl;

    p->height = nodeheight(p);
    pl->height = nodeheight(pl);
    plr->height = nodeheight(plr);

    if (root == p)
        root = plr;

    return plr;
}

struct node *rinsert(struct node *p, int key) // recursive insert
{
    struct node *t = NULL;

    if (p == NULL)
    {
        t = (struct node *)malloc(sizeof(struct node));
        t->data = key;
        t->height = 1;
        t->lchild = t->rchild = NULL;
        return t;
    }
    if (key < p->data)
        p->lchild = rinsert(p->lchild, key);
    else if (key > p->data)
        p->rchild = rinsert(p->rchild, key);

    p->height = nodeheight(p); // updating heights of everynode

    if (balancefactor(p) == 2 && balancefactor(p->lchild) == 1)
        return LLrotation(p);
    if (balancefactor(p) == 2 && balancefactor(p->lchild) == -1)
        return LRrotation(p);
    return p;
}

int main()
{
    // for LL rotation

    // root = rinsert(root,10);
    // rinsert(root,5);
    // rinsert(root,2);

    // we can see in debug area that 5 will become root and 2 its lchild and 10 its rchild

    // for LR rotation
    root = rinsert(root, 50);
    rinsert(root, 10);
    rinsert(root, 20);

    // we can see in debug area that 20 will become root and 10 its lchild and 50 its rchild

    return 0;
}