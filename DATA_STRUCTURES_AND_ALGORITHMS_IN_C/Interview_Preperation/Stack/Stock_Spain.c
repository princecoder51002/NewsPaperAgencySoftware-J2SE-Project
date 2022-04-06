#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node *next;
}*top=NULL;

int B[7];

int main()
{

    int A[] = {100,80,60,70,60,75,85};

    void Stock_Spain(int A[], int n);
    Stock_Spain(A,7);
    
    B[0] = 1;
    printf("%d ", B[0]);

    for(int i = 1; i<7;i++)
    {
        printf("%d ", B[i]);
    }

    return 0;
}

void push(int x)
{
    struct node *t;
    t = (struct node *)malloc(sizeof(struct node));

    if(t==NULL)
    printf("stack is full");

    else 
    {
        t -> data = x;
        t -> next = top;
        top = t;
    }
}

void Stock_Spain(int A[], int n)
{
    int j = 1;
    push(A[0]);
    for(int i=1;i<n;i++)
    {
        int span = 1;
        if(top -> data > A[i])
        {
            B[j++] = span;
            push(A[i]);
        }
        else 
        {
            struct node *t = top;
            while(t -> data < A[i])
            {
                t = t-> next;
                span++;
            }

            B[j++] = span;
            push(A[i]);
        }
        
    }
}