#include "Stack.h"
#include <stdio.h>

void initStack(Stack* s)
{
    if (s == NULL)
    {
        return;
    }
    s->head = NULL;
}

void cleanStack(Stack* s)
{
    if (s == NULL)
    {
        return;
    }
    freeList(&(s->head));
}

bool isEmpty(Stack* s)
{
    return (s == NULL || s->head == NULL);
}

bool isFull(Stack* s)
{
    return false;
}

void push(Stack* s, unsigned int element)
{
    if (s == NULL)
    {
        return;
    }
    addToHead(&(s->head), element);
}

int pop(Stack* s)
{
    if (s == NULL || isEmpty(s))
    {
        return -1;
    }
    return removeFromHead(&(s->head));
}