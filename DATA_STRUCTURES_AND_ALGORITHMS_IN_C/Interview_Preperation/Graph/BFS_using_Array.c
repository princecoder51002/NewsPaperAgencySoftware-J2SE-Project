#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int size;
    int front;
    int rear;
    int *Q;
};

void createQueue(struct queue *q, int size)
{
    q->size = size;
    q->front = q->rear = -1;
    q->Q = (int *)malloc(size*sizeof(int));
}

void enqueue(struct queue *q, int x)
{
    if (q->rear == q->size - 1)
        printf("Queue is full");

    else
    {
        q->rear++;
        q->Q[q->rear] = x;
    }
}

int dequeue(struct queue *q)
{
    int x = -1;
    if(q -> front == q -> rear)
    printf("queue is empty");

    else
    {
        q -> front++;
        x = q -> Q[q -> front];
    }

    return x;
}

int isEmpty(struct queue *q)
{
    if(q -> front == q -> rear)
    return 1;

    return 0;
}

int main()
{
    int A[7][7] = {
        {0,0,0,0,0,0,0},
        {0,0,1,1,0,0,0},
        {0,1,0,0,1,0,0},
        {0,1,0,0,1,0,0},
        {0,0,1,1,0,1,1},
        {0,0,0,0,1,0,0},
        {0,0,0,0,1,0,0}
    };

    void BFS(int A[][7], int i);
    BFS(A,4);

    return 0;
}

void BFS(int A[][7], int i)
{
    struct queue q;
    createQueue(&q, 7);
    int visited[7] = {0};
    int u;

    printf("%d ", i);
    visited[i] = 1;
    enqueue(&q, i);

    while(!isEmpty(&q))
    {
      int u = dequeue(&q);

      for(int v = 1;v<=7;v++)
      {
          if(A[u][v] == 1 && visited[v] == 0)
          {
              printf("%d ", v);
              visited[v] = 1;
              enqueue(&q, v);
          }
      }
    }
}