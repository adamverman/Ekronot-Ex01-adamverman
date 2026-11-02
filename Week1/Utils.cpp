#include "Utils.h"
#include "Stack.h"
#include <iostream>

#define SIZE 10

void reverse(int* nums, unsigned int size)
{
    Stack s;
    initStack(&s);

    for (unsigned int i = 0; i < size; i++)
    {
        push(&s, nums[i]);
    }

    for (unsigned int i = 0; i < size; i++)
    {
        nums[i] = pop(&s);
    }

    cleanStack(&s);
}

int* reverse10()
{
    int* arr = new int[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        std::cin >> arr[i];
    }
    reverse(arr, SIZE);

    return arr;
}