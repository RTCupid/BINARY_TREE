typedef struct Node_t
{
    int data;
    Node_t* left;
    Node_t* right;
    Node_t* prnt;
} Node_t;

void Print (Node_t* root);

Node_t* NewNode (int data, Node_t* parrent);
