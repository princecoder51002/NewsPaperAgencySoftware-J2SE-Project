#include <stdio.h>
#include <stdlib.h>
struct node
{
    char data;
    struct node *next;
} *top = NULL;

int main()
{
    char *exp = "{([a+b]*[c+d])/e}";

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
    char x = -1;
    if (top == NULL)
        printf("stack is empty\n");
    else
    {
        t = top;
        top = top->next;
        x = t->data;
        free(t);
    }
    return x;
}

int balanced(char *exp)
{
    int i;
    char x;
    for (i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(' || exp[i] == '[' || exp[i] == '{')
            push(exp[i]);
        else if (exp[i] == ')' || exp[i] == ']' || exp[i] == '}')
        {
            if (top == NULL)
                return 0;
            x = pop();
            if ((exp[i] == ')' && x != '(') || (exp[i] == ']' && x != '[') || (exp[i] == '}' && x != '{'))
                return 0;
        }
    }
    if (top == NULL)
        return 1;
    else
        return 0;
}