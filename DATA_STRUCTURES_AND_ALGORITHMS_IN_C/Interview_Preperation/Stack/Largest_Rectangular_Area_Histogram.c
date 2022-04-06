#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} *top = NULL;

struct stack
{
    int size;
    int top;
    int *Q;
};

int main()
{

    int A[] = {6, 7, 8, 80, 90};
    // int Maximum(int A[], int n);
    // int ans = Maximum(A, 5);c

    int Maximum_Area_Histogram(int A[], int n);
    int ans2 = Maximum_Area_Histogram(A, 5);

    printf("%d ", ans2);

    return 0;
}

int Maximum(int A[], int n)
{
    int max = -1;
    for (int i = 0; i < n; i++)
    {
        int curr_area = 0;

        int left = i;
        int right = i;

        while (A[left] >= A[i])
        {
            if (left == 0)
                break;
            else
                left--;
        }

        while (A[right] >= A[i])
        {

            right++;

            if (right == n)
                break;
        }

        curr_area = curr_area + (A[i] * (right - left - 1));

        if (max < curr_area)
            max = curr_area;
    }

    return max;
}

void push(int x)
{
    struct node *t;
    t = (struct node *)malloc(sizeof(struct node));

    if (t == NULL)
        printf("stack is full");

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
        printf("Stack is empty");

    else
    {
        x = top->data;
        t = top;
        top = top->next;
        free(t);
    }

    return x;
}

void createStack(struct stack *s, int size)
{
    s->size = size;
    s->top = -1;
    s->Q = (int *)malloc(size * sizeof(int));
}

void stack_push(struct stack *s, int x)
{
    if (s->top == s->size)
        printf("Stack is Full");

    else
    {
        s->top++;
        s->Q[s->top] = x;
    }
}

void stack_pop(struct stack *s)
{
    int x = -1;
    if (s->top == -1)
        printf("Stack is Empty");

    else
    {
        x = s->Q[s->top];
        s->top--;
    }
}

int isEmpty_stack(struct stack *s)
{
    if (s->top == -1)
        return 1;

    return 0;
}

int Maximum_Area_Histogram(int A[], int n)
{
    struct stack st;
    createStack(&st, 100);

    int max_area = 0;
    int tp;
    int area_with_top = 0;

    int i = 0;

    while (i < n)
    {
        if (isEmpty_stack(&st) || A[st.Q[st.top]] <= A[i])
            stack_push(&st, i++);

        else
        {
            tp = st.Q[st.top];
            stack_pop(&st);

            area_with_top = A[tp] * (isEmpty_stack(&st) ? i : i - st.Q[st.top] - 1);

            if (area_with_top > max_area)
            max_area = area_with_top;
        }

    }

    while (!isEmpty_stack(&st))
    {
        tp = st.Q[st.top];
        stack_pop(&st);

        area_with_top = A[tp] * (isEmpty_stack(&st) ? i : i - st.top - 1);

        if (area_with_top > max_area)
            max_area = area_with_top;
    }

    return max_area;
}