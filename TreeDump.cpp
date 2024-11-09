#include <stdio.h>
#include <stdlib.h>

#include "BinaryTree.h"

#define PS if(1)

void TreeDump (tree_t* tree)
{
    MakeDotFile (tree->root);

    system ("dot -Tpng DumpTree.dot -o Tree.png");

    fprintf (tree->log_file, "<center><img src = Tree.png ></center>\n\n");

    fclose (tree->log_file);

    PS Pause ();
}

void MakeDotFile (node_t* root)
{
    FILE* dot_file = fopen ("DumpTree.dot", "wt");

    fprintf (dot_file, "digraph G {\n");
    fprintf (dot_file, "\trankdir = HR;\n");
    fprintf (dot_file, "\tbgcolor=\"#F7F9FB\"\n");

    Print (root, dot_file);

    fprintf (dot_file, "}\n");
    fclose (dot_file);
}

void Print (node_t* node, FILE* dot_file)
{
    if (!node)
    {
        return;
    }

    fprintf (dot_file, "\t node%p [shape=Mrecord; style=filled; color=\"#8FC1E3\"; "
        "label =  \"{node: %p | data: %3d | prnt: %p | {<left>left: %p | <right>right: %p}  }\" ];\n",
        node, node, node->data, node->prnt, node->left, node->right);

    if (node->left)
    {
        fprintf (dot_file, "\t node%p:<left> -> node%p [style=bold; weight=1000; ];\n", node, node->left);
    }
    if (node->right)
    {
        fprintf (dot_file, "\t node%p:<right> -> node%p [style=bold; weight=1000; ];\n", node, node->right);
    }

    /*......LEFT......*/
    Print (node->left, dot_file);

    /*......RIGHT......*/
    Print (node->right, dot_file);
}

void Pause ()
{
    printf ("Enter to continue...\n");
    getchar ();
}
