#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node
{
    int data;
    struct node *next;
};
struct node *top = NULL;
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
int isEmpty()
{
    return ((top == NULL) ? 1 : 0);
}
int isOperand(char ch)
{
    if (ch == '+' || ch == '-' || ch == '/' || ch == '*' || ch == '(' || ch == ')' || ch == '^')
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int outpre(char x)
{
    if (x == '+' || x == '-')
        return 1;
    if (x == '*' || x == '/')
        return 3;
    if (x == '^')
        return 6;
    if (x == '(')
        return 7;
    if (x == ')')
        return 0;
    else
        return -1;
}
int inpre(char x)
{
    if (x == '+' || x == '-')
        return 2;
    if (x == '*' || x == '/')
        return 4;
    if (x == '^')
        return 5;
    if (x == '(')
        return 0;
    else
        return -1;
}
char *intopost(char *infix)
{
    int i = 0, j = 0;
    char *postfix;
    int len = strlen(infix);
    postfix = (char *)malloc((len + 2) * (sizeof(char)));
    while (infix[i] != '\0')
    {
        if (isOperand(infix[i]))
        {
            postfix[j++] = infix[i++];
        }
        else
        {
            if (top == NULL || outpre(infix[i]) > inpre(top->data))
            {
                push(infix[i++]);
            }
            else if (outpre(infix[i]) < inpre(top->data))
            {
                postfix[j++] = pop();
            }
            else
            {
                pop();
                i++;
            }
        }
    }
    while (!isEmpty())
    {
        postfix[j++] = pop();
    }
    postfix[j] = '\0';
    return postfix;
}
void main()
{
    char *exp = "((a+b)*c)-d^e^f";
    char *ans = intopost(exp);
    printf("%s", ans);
}