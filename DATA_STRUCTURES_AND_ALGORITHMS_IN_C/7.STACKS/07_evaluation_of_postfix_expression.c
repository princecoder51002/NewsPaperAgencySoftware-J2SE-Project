#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node
{
    int data;
    struct node *next;
} *top = NULL;

int main()
{
    char *postfix = "234*+82/-";
    int eval(char *postfix);
    int p = eval(postfix);
    printf("result is %d", p);
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

int pop()
{
    struct node *t;
    int x = -1;
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

int isoperand(char x)
{
    if (x == '+' || x == '-' || x == '*' || x == '/')
        return 0;
    else
        return 1;
}

int eval(char *postfix)
{
    int i = 0;
    int x1, x2, r;
    for (i = 0; postfix[i] != '\0'; i++)
    {
        if (isoperand(postfix[i]))
        {
            push(postfix[i] - '0');
        }

        else
        {
            x2 = pop();
            x1 = pop();
            switch (postfix[i])
            {
            case '+':
                r = x1 + x2;
                break;
            case '-':
                r = x1 - x2;
                break;
            case '*':
                r = x1 * x2;
                break;
            case '/':
                r = x1 / x2;
                break;
            }
            push(r);
        }
    }
    return top->data;
}