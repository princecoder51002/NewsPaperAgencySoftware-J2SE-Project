#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node *next;
}*top = NULL;

int main()
{

    int A[] = {4,7,11,5,13,2};
    int B[] = {4,7,13,2};
     
    bool Geeky(int A[], int n);
    bool ans = Geeky(B,4);

    printf(ans ? "true\n" : "false\n");

    bool Geeky_Buldings(int A[], int n);
    bool ans2 = Geeky_Buldings(B,4);

    printf(ans2 ? "true" : "false");


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

int pop()
{
    struct node *t;
    int x = -1;
    if(top == NULL)
    printf("Stack is empty");

    else 
    {
        x = top -> data;
        t = top;
        top = top->next;
        free(t);
    }

    return x;
}

bool Geeky(int A[], int n)
{
    for(int i=0;i<n-2;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if((A[i] < A[j]) && (A[k] > A[i]) && (A[k] < A[j]))
                return true;
            }
        }
    }

    return false;
}

int min(int x, int y)
{
    return x > y ? y : x;
}

bool Geeky_Buldings(int A[], int n)
{

    if(n<3)
    return false;

    int PreMin[n];
    PreMin[0] = A[0];

    for(int i=1;i<n;i++)
    {
        PreMin[i] = min(PreMin[i-1],A[i]);
    }

    for(int i = n-1;i>=0;i--)
    {
        int x=0;
        if(A[i] > PreMin[i])
        {
            while(top!=NULL && PreMin[i] >= top -> data)
            x = pop();
        
            if(top!=NULL && A[i] > top -> data)
            return true;

            push(A[i]);

        }
    }

    return false;
}