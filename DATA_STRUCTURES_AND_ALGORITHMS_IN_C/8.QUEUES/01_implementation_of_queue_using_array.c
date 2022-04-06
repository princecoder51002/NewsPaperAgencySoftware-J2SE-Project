#include <stdio.h>

struct queue
{
    int size;
    int front;
    int rear;
    int *Q;
};
int main()
{
    struct queue q;
    printf("enter size of queue: \n");
    scanf("%d", &q.size);
    q.Q = (int *)malloc(q.size * sizeof(int));
    q.front = q.rear = -1;

    void enqueue(struct queue * q, int x);
    int dequeue(struct queue * q);
    void display(struct queue q);

    enqueue(&q, 15);
    enqueue(&q, 12);
    enqueue(&q, 11);
    enqueue(&q, 10);
    enqueue(&q, 150);

    display(q);
    printf("\n");

    printf("first element after popping: %d\n", dequeue(&q));

    display(q);
    return 0;
}

void enqueue(struct queue *q, int x)
{
    if (q->rear == q->size - 1)
        printf("queue is full");
    else
    {
        q->rear++;
        q->Q[q->rear] = x;
    }
}
int dequeue(struct queue *q)
{
    int x = -1;
    if (q->front == q->rear)
        printf("queue is empty");
    else
    {
        q->front++;
        x = q->Q[q->front];
    }
    return x;
}

void display(struct queue q)
{
    int i;
    for (i = q.front + 1; i <= q.rear; i++)
    {
        printf("%d ", q.Q[i]);
    }
}