#include<stdio.h>
#include<stdlib.h>
#include "node.h"
#include "newnode.h"
#ifndef CREATEBST_H
#define CREATEBST_H

extern struct node *CreateBST(struct node *root, int data)
{
    if (root == NULL)
    {
        return newnode(data);
    }
    else
    {
        if (data > root->data)
        {
            root->r = CreateBST(root->r, data);
        }
        else if (root->data > data)
        {
            root->l = CreateBST(root->l, data);
        }
    }
}

#endif