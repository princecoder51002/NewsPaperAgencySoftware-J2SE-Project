#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int *s;
};
int main()
{
    struct stack st;
    void create(struct stack * st);
    void display(struct stack st);
    void push(struct stack * st, int x);
    int pop(struct stack * st);
    int peek(struct stack st, int index);
    create(&st);
    push(&st, 10);
    push(&st, 20);
    push(&st, 30);
    push(&st, 40);
    printf("%d", peek(st, 3));
    printf("\n");
    display(st);
    printf("after popping: %d", pop(&st));
    return 0;
}
void create(struct stack *st)
{
    printf("enter stack size: \n");
    scanf("%d", &st->size);
    st->top = -1;
    st->s = (int *)malloc(st->size * sizeof(int));
}
void display(struct stack st)
{
    int i;
    for (i = st.top; i >= 0; i--)
    {
        printf("%d", st.s[i]);
    }
    printf("\n");
}

void push(struct stack *st, int x)
{
    if (st->top == st->size - 1)
        printf("stack overflown\n");
    else
    {
        st->top++;
        st->s[st->top] = x;
    }
}
int pop(struct stack *st)
{
    int x = -1;
    if (st->top == -1)
        printf("stack underflown\n");
    else
    {
        x = st->s[st->top--];
    }
    return x;
}
int peek(struct stack st, int index)
{
    int x = -1;
    if (st.top - index + 1 < 0)
        printf("invalid index");
    else
    {
        x = st.s[st.top - index + 1];
    }
    return x;
}
int isempty(struct stack st)
{
    if (st.top == -1)
        return 1;
    return 0;
}
int isfull(struct stack st)
{
    if (st.top == st.size - 1)
        return 1;
    return 0;
}
int stacktop(struct stack st)
{
    if (!isempty(st))
    {
        return st.s[st.top];
    }
    return -1;
}