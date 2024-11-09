#include <stdio.h>

#include "BinaryTree.h"

int main ()
{
    tree_t tree = {};
    TreeCtor (&tree);
    tree.root->left = NewNode (12, tree.root);
    tree.root->left->left = NewNode (5, tree.root->left);
    tree.root->left->right = NewNode (15, tree.root->left);
    tree.root->right = NewNode (70, tree.root);
    tree.root->right->left = NewNode (60, tree.root->right);

    TreeDump (&tree);

    TreeDtor (&tree);
    return 0;
}
