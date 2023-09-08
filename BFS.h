#include<stdio.h>
#include<stdlib.h>
#include "node.h"

#ifndef BFS_H
#define BFS_H
extern void BFS(struct node *root)
{
    if (root == NULL)
    {
        printf("No Node to print!");
        return;
    }

    struct node *q[100];
    int rear = -1;
    int front = -1;

    q[rear++] = root;
    while (front < rear)
    {
        struct node *current = q[front++];
        printf("%d ", current->data);

        if (current->l != NULL)
        {
            q[rear++] = current->l;
        }
        if (current->r != NULL)
        {
            q[rear++] = current->r;
        }
    }
}

#endif