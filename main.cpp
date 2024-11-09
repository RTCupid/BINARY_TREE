#include <stdio.h>

#include "BinaryTree.h"

int main ()
{
    tree_t tree = {};
    TreeCtor (&tree);
    NewNode (12, tree.root, LEFT);
    NewNode (5, tree.root->left, LEFT);
    NewNode (15, tree.root->left, RIGHT);
    NewNode (70, tree.root, RIGHT);
    NewNode (60, tree.root->right, LEFT);

    TreeInsert (&tree, 20);
    TreeInsert (&tree, 90);
    TreeInsert (&tree, 40);
    TreeInsert (&tree, 65);
    TreeInsert (&tree, 4);
    TreeInsert (&tree, 7);
    TreeInsert (&tree, 110);
    TreeInsert (&tree, 95);
    TreeInsert (&tree, 55);
    TreeInsert (&tree, 67);
    TreeInsert (&tree, 47);

    TreeDtor (&tree);
    return 0;
}
