#include<stdio.h>
#include<stdlib.h>
#include "node.h"

#ifndef INO_H
#define INO_H


extern void DFSInorder(struct node *root)
{
    if (root == NULL)
    {
        printf("No node to print !");
        return;
    }

    struct node *stack[100];
    int top = -1;
    struct node *current = root;
    while (current != NULL || top != -1)
    {
        while (current != NULL)
        {
            stack[++top] = current;
            current = current->l;
        }
        current = stack[top--];
        printf("%d ", current->data);
        current = current->r;
    }
}
#endif