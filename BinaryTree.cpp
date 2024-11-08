#include <stdio.h>
#include <stdlib.h>

#include "BinaryTree.h"

node_t* NewNode (int data, node_t* parrent)
{
    node_t* node = (node_t*)calloc (1, sizeof (*node));
    node->data = data;

    node->left  = NULL;
    node->right = NULL;
    node->prnt  = parrent;

    return node;
}

void ClearTree (node_t* node)
{
    if (!node)
    {
        return;
    }
    if (node->left)
    {
        ClearTree (node->left);

    }
    if (node->right)
    {
        ClearTree (node->right);
    }

    free (node);
    node = NULL;
}

