#ifndef BINARYTREE_H
    #define BINARYTREE_H

    enum errTr_t
    {
        TREE_OK = 0,
        ERROR_CTOR_TREE,


    };

    enum brnch_side_t
    {
        RIGHT = 0,
        LEFT  = 1,
    };

    typedef struct node_t
    {
        int data;
        node_t* left;
        node_t* right;
        node_t* prnt;
    } node_t;

    typedef struct
    {
        node_t* root;
        node_t* crnt_node;
        FILE* log_file;
    } tree_t;

    errTr_t TreeCtor (tree_t* tree);

    void TreeDtor (tree_t* tree);

    void TreeDump (tree_t* tree);

    void Pause ();

    void MakeDotFile (tree_t* tree);

   void Print (tree_t tree, node_t* node, FILE* dot_file);

    errTr_t NewNode (int data, node_t* parrent, brnch_side_t branch_side);

    void ClearTree (node_t* node);

    errTr_t TreeInsert (tree_t* tree, int data);

#endif
