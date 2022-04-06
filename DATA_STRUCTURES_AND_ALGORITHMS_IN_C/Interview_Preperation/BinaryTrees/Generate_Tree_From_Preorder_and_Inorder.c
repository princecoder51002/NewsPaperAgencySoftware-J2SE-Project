#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node 
{
    int data;
    struct node *lchild, *rchild;
}*root = NULL;

int search(int B[], int start, int end, int key)
{
    for(int i = start; i<=end;i++)
    {
        if(key==B[i])
        return i;
    }
}

struct node *buildtree(int A[], int B[], int start, int end)
{
     static int preIndex = 0;

     if(start > end)
     return NULL;

     struct node *p;
     p = (struct node *)malloc(sizeof(struct node));
     p -> data = B[preIndex++];
     p -> lchild = p -> rchild = NULL;

     if(start == end)
     return p;

     int inIndex = search(A, start, end, p->data);

     p -> lchild = buildtree(A, B, start, inIndex-1);
     p -> rchild = buildtree(A,B,inIndex+1,end);

     return p;
}

int main()
{

    int In[] = {7,6,9,3,4,5,8,2,1};
    int Pre[] = {4,7,9,6,3,2,5,8,1};

    int n = 9;

    struct node *buildtree(int A[], int B[], int start, int end);
    root = buildtree(In,Pre,0,n-1);
    
    void inorder(struct node *p);
    inorder(root);

    return 0;
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