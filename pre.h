#include<stdio.h>
#include<stdlib.h>
#include "node.h"

#ifndef PRE_h
#define PRE_h


extern void DFSPreorder(struct node *root)
{
    if (root == NULL)
    {
        printf("No node to print!");
    }

    struct node *stack[100];
    int top = -1;
    stack[++top] = root;
    while (top != -1)
    {
        struct node *current = stack[top--];
        printf("%d ", current->data);
        if (current->r != NULL)
        {
            stack[++top] = current->r;
        }
        if (current->l != NULL)
        {
            stack[++top] = current->l;
        }
    }
}

#endif
