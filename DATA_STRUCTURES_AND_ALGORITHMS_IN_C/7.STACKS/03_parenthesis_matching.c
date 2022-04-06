#include <stdio.h>
#include <stdlib.h>
struct node
{
    char data;
    struct node *next;
} *top = NULL;

int main()
{
    char *exp = "((a+b)*(c+d))";

    int balanced(char *exp);
    int m = balanced(exp);
    printf("%d", m);
    return 0;
}

void push(char x)
{
    struct node *t;
    t = (struct node *)malloc(sizeof(struct node));

    if (t == NULL)
        printf("stack is full\n");
    else
    {
        t->data = x;
        t->next = top;
        top = t;
    }
}

char pop()
{
    struct node *t;
    if (top == NULL)
        printf("stack is empty\n");
    else
    {
        t = top;
        top = top->next;
        free(t);
    }
}

int balanced(char *exp)
{
    int i;
    for (i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(')
            push(exp[i]);
        else if (exp[i] == ')')
        {
            if (top == NULL)
                return 0;
            pop();
        }
    }

    if (top == NULL)
        return 1;
    else
        return 0;
}
