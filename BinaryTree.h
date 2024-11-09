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

void TreeCtor (tree_t* tree);

void TreeDtor (tree_t* tree);

void TreeDump (tree_t* tree);

void MakeDotFile (node_t* root);

void Print (node_t* root, FILE* dot_file);

node_t* NewNode (int data, node_t* parrent);

void ClearTree (node_t* node);
