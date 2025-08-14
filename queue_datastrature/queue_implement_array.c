#include <stdio.h>
#include <stdlib.h>

typedef struct Queue{
    int size;
    int front;
    int rear;
    int *arr;
} Queue;

int isFull(Queue *q){
    return q->rear == q->size - 1;
}

int isEmpty(Queue *q){
    return q->front == q->rear;
}

void enqueue(Queue *q, int val){
    if (isFull(q))
    {
        printf("Queue is Full\n");
    }
    else
    {
        q->rear++;
        q->arr[q->rear] = val;
        printf("Enqueued: %d\n", val);
    }
}

void queue_print(Queue *q){
    if (isEmpty(q))
    {
        printf("Queue is EMpty");
        return;
    }
    for (int i = q->front + 1; i <= q->rear; i++)
    {
        printf("%d ", q->arr[i]);
    }
    printf("\n");
}

int dequeue(Queue *q){
    int x = -1;
    if (isEmpty(q))
    {
        printf("Queue is Empty\n");
    }
    else
    {
        q->front++;
        x = q->arr[q->front];
        printf("Dequeued: %d\n", x);
    }
    return x;
}

int main(){
    Queue q;
    q.size = 100;
    q.front = q.rear = -1;
    q.arr = (int *)malloc(q.size * sizeof(int));

    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    queue_print(&q); // Show queue

    dequeue(&q);
    queue_print(&q); // Show queue after dequeue

    enqueue(&q, 40);
    queue_print(&q); // Final state

    free(q.arr);
    return 0;
}
