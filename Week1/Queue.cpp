#include "queue.h"
#include <stdlib.h>

void initQueue(Queue* q, unsigned int size)
{
    if (q == NULL) return;
    q->capacity = size;
    q->count = 0;
    q->front = 0;
    q->rear = 0;
    q->array = (unsigned int*)malloc(sizeof(unsigned int) * size);
}
void cleanQueue(Queue* q)
{
    if (q == NULL) return;

    if (q->array != NULL)
    {
        free(q->array);

        q->array = NULL;
    }

    q->capacity = 0;
    q->count = 0;
    q->front = 0;
    q->rear = 0;
}
void enqueue(Queue* q, unsigned int newValue)
{
    if (q == NULL || isFull(q)) return;

    q->array[q->rear] = newValue;

    q->rear = (q->rear + 1) % q->capacity;

    q->count++;
}
int dequeue(Queue* q) // return element in top of queue, or -1 if empty
{
    if (q == NULL || isEmpty(q)) return -1;

    int value = (int)q->array[q->front];

    q->front = (q->front + 1) % q->capacity;

    q->count--;

    return value;
}
bool isEmpty(Queue* q)
{
    return (q == NULL || q->count == 0);
}
bool isFull(Queue* q)
{
    return (q != NULL && q->count == q->capacity);
}
