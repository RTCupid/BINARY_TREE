#include <stdio.h>
#include <stdlib.h>

#include "BinaryTree.h"

Node_t* NewNode (int data, Node_t* parrent)
{
    Node_t* node = (Node_t*)calloc (1, sizeof (*node));
    node->data = data;

    node->left  = NULL;
    node->right = NULL;
    node->prnt  = parrent;

    return node;
}

