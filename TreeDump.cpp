#include <stdio.h>
#include <stdlib.h>

#include "BinaryTree.h"

void TreeDump (node_t* root)
{
    FILE* dot_file = fopen ("DumpTree.dot", "wt");

    fprintf (dot_file, "digraph G {\n");
    fprintf (dot_file, "\trankdir = HR;\n");
    fprintf (dot_file, "\tbgcolor=\"#FBEEC1\"\n");
    Print (root, dot_file);
    fprintf (dot_file, "}\n");
    fclose (dot_file);

    system ("dot -Tpng DumpTree.dot -o Tree.png");
}

void Print (node_t* node, FILE* dot_file)
{
    static int numnode = 111;
    if (!node)
    {
        fprintf (dot_file, "\t node%03d [shape=Mrecord; style=filled; label = \"null\"; ]\n ", numnode);
        fprintf (dot_file, "\t node%03d -> node%03d [style=bold; weight=1000; ];\n", numnode - 1, numnode);
        numnode++;
        return;
    }

    fprintf (dot_file, "\t node%03d [shape=Mrecord; style=filled; "
        "label =  \"{data: %3d} | {left: %p}  | {right: %p} | {prnt: %p} \" ];\n",
        numnode, node->data, node->left, node->right, node->prnt);
    fprintf (dot_file, "\t node%03d -> node%03d [style=bold; weight=1000; ];\n", numnode - 1, numnode);

    numnode++;

    /*......LEFT......*/
    Print (node->left, dot_file);

    /*......RIGHT......*/
    Print (node->right, dot_file);
}
