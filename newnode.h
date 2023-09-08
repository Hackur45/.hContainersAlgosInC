#include<stdio.h>
#include<stdlib.h>
#include "node.h"

#ifndef newnode_h
#define newnode_h
extern struct node *newnode(int data)
{
    struct node *t = (struct node *)malloc(sizeof(struct node));
    t->data = data;
    t->r = NULL;
    t->l = NULL;
    return t;
}
#endif