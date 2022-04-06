#include <stdio.h>
#include <stdlib.h>

struct node 
{
    char data;
    struct node *next;
}*top = NULL;

void push(char x)
{
    struct node *t;
    t = (struct node *)malloc(sizeof(struct node));

    if(t==NULL)
    printf("Stack is full\n");

    else 
    {
        t -> data = x;
        t -> next = top;
        top = t;
    }
}

void pop()
{
    struct node *p = (struct node *)malloc(sizeof(struct node));

    if(top == NULL)
    printf("Stack is empty\n");

    else 
    {
          p = top;
          top = top -> next;
          free(p);
    }
  
}

char topper()
{
   return top -> data;
}

void Remove_K_Digits(char str[], int n, int k)
{
    char *ans = (char *)malloc((n-k)*sizeof(char));
    for(int i=0;str[i]!='\0';i++)
    {
        while(top && k>0 && (str[i] - '0') < (topper() - '0'))
        {
             pop();
             k--;
        }

        if(top || str[i]!='0')
        push(str[i]);
    }

    while(top && k--)
    {
        pop();
    }

    if(top == NULL)
    return;

    int p=n-k;

    for(int i=0;i<n-k;i++)
    {
        ans[i] = '0';
    }

    while(top)
    {
        ans[p-1] = top -> data;
        pop();
        n--;
        p--;
    }

    for(int i=n;ans[i] != '\0';i++)
    {
        if(ans[i]=='0')
        continue;
        printf("%c", ans[i]);
    }

    
}

int main()
{
    char str[] = "765028321";
    void Remove_K_Digits(char str[], int n, int k);
    Remove_K_Digits(str,9,5);

    return 0;
}