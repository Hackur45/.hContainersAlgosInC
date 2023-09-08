#include<stdio.h>
#include<stdlib.h>
#include "node.h"

#ifndef POST_H
#define POST_H

extern void DFSPostorder(struct node *root)
{
    if (root == NULL)
    {
        printf("No node to print!");
        return;
    }

    struct node *s1[50], *s2[50];
    int t1 = -1;
    int t2 = -1;

    s1[++t1] = root;
    while (t1 != -1)
    {
        struct node *current = s1[t1--];
        s2[++t2] = current;
        if (current->l != NULL)
        {
            s1[++t1] = current->l;
        }
        if (current->r != NULL)
        {
            s1[++t1] = current->r;
        }
    }

    while (t2 != -1)
    {
        printf("%d ", s2[t2--]->data);
    }
}

#endif