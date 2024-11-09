#include <stdio.h>
#include <stdlib.h>

#include "BinaryTree.h"

void TreeCtor (tree_t* tree)
{
    tree->root = NewNode (50, NULL);
    tree->crnt_node = tree->root;
    tree->log_file = fopen ("log_file.htm", "wt");
}

void TreeDtor (tree_t* tree)
{
    ClearTree (tree->root);
    fclose (tree->log_file);
}

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

