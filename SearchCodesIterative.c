#include <stdio.h>
#include <stdlib.h>
#include "pre.h"
#include "BFS.h"
#include "ino.h"
#include "post.h"
#include "node.h"
#include "CreateBST.h"

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
    printf("Breadth First Search on BST : ");
    BFS(t);
    printf("\n");
    printf("PreOrder of Binary Search Tree : ");
    DFSPreorder(t);
    printf("\n");
    printf("InOrder of Binary Search Tree : ");
    DFSInorder(t);
    printf("\n");
    printf("PostOrder of Binary Search Tree : ");
    DFSPostorder(t);
    return 0;
}