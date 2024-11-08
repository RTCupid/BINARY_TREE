#include <stdio.h>

#include "BinaryTree.h"

void Print (node_t* node)
{
    if (!node)
    {
        return;
    }
    printf ("(");
    printf ("%d ", node->data);

    if (node->left)
    {
        Print (node->left);
    }
    if (node->right)
    {
        Print (node->right);
    }

    printf (")");
}
