#ifndef NODE_H
#define NODE_H

struct node {
    int data;
    struct node *l;
    struct node *r;
};

extern struct node *current;

#endif
