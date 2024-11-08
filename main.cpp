#include <stdio.h>

#include "BinaryTree.h"

int main ()
{
    node_t* root = NewNode (50, NULL);
    root->left = NewNode (12, root);
    root->left->left = NewNode (5, root->left);
    root->left->right = NewNode (15, root->left);
    root->right = NewNode (70, root);
    root->right->left = NewNode (60, root->right);

    Print (root);
    printf ("\n");

    ClearTree (root);

    return 0;
}
