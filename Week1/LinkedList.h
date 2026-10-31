#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef struct Node
{
    unsigned int value;
    struct Node* next;
} Node;

void addToHead(Node** head, unsigned int value);
int removeFromHead(Node** head); 
void freeList(Node** head);

#endif // /* LINKELIST_H */