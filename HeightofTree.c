#include <stdio.h>
#include "CreateBST.h"
#include "node.h"
#include "newnode.h"
#include "ino.h"

int height(struct node *root)
{
    if(root == NULL){
        return -1;
    }

    int r = height(root->r);
    int l = height(root->l);
    if (r > l)
    {
        return r + 1;
    }
    else  
    {
        return l + 1;
    }
}

struct node* deleteLeaves(struct node *root){
    if(root== NULL){
        return NULL;
    }

    if(root -> l ==NULL && root->r == NULL){
        free(root);
        return NULL;
    }
    
    root->l=deleteLeaves(root->l);
    root->r=deleteLeaves(root->r);
}

int countNodes(struct node *root){
    if (root == NULL) {
        return 0;
    } else {
        return 1 + countNodes(root->l) + countNodes(root->r);
    }
}
int main()
{
    int arr[10];

    int n;
    printf("Enter the number of elements in tree : ");
    scanf("%d", &n);

    printf("Enter elements : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    struct node *t = NULL;
    for (int i = 0; i < n; i++)
    {
        t = CreateBST(t, arr[i]);
    }
    printf("Height of tree is : %d \n",height(t) );
    printf("Number of node in tree : %d",countNodes(t) );
    t=deleteLeaves(t);
    printf("After delting leaves : ");
    DFSInorder(t);
    printf("Number of node in tree : %d",countNodes(t) );
    return 0;
}