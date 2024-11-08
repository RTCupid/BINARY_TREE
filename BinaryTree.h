typedef struct node_t
{
    int data;
    node_t* left;
    node_t* right;
    node_t* prnt;
} node_t;

void Print (node_t* root);

node_t* NewNode (int data, node_t* parrent);

void ClearTree (node_t* node);
