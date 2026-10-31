#include "LinkedList.h"
#include <stdio.h>

void addToHead(Node** head, unsigned int value)
{   
    if (head == NULL)
    {
        return;
    }

    Node* newNode = new Node;
    newNode->value = value;
    newNode->next = *head;
    *head = newNode;
}

int removeFromHead(Node** head)
{
    if (head == NULL || *head == NULL)
    {
        return -1;
    }

    Node* temp = *head;
    int val = (int)temp->value;
    *head = (*head)->next;

    delete temp;
    return val;
}

void freeList(Node** head)
{
    if (head == NULL)
    {
        return;
    }

    while (*head != NULL)
    {
        removeFromHead(head);
    }
}