#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node *next;
}*first = NULL;

int main()
{

    int n;
    printf("Enter n: \n");
    scanf("%d", &n);

    int A[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d", &A[i]);
    }

    void create(int A[], int n);
    create(A,n);

    void ReArrange(struct node *p);
    ReArrange(first);

    void display(struct node *p);
    display(first);

    return 0;
}

void display(struct node *p)
{
    while(p!=NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}

void create(int A[], int n)
{

    struct node *t, *last;
    first = (struct node *)malloc(sizeof(struct node));
    first -> data = A[0];
    first -> next = NULL;
    last = first;

    for(int i=1; i<n;i++)
    {
         t = (struct node *)malloc(sizeof(struct node));
         t -> data = A[i];
         t -> next = NULL;
         last -> next = t;
         last = t;
    }
}

void ReArrange(struct node *p)
{
   struct node *q = p->next;
   struct node *r = p->next;

   while(1)
   {
   
   if(q -> next == NULL)
   {
       p -> next = r;
       break;
   }

   p -> next = q -> next;
   p = q -> next;

   if(p -> next == NULL)
   {
       q -> next = NULL;
       p -> next = r;
       break;
   }

   q -> next = p -> next;
   q = p->next;

   }

}