#include <stdio.h>

#include "Binary_tree.h"

int main ()
{
    Node_t* root = NewNode (50, NULL);
    root->left = NewNode (12, root);
    root->left->left = NewNode (5, root->left);
    root->left->right = NewNode (15, root->left);

    return 0;
}
