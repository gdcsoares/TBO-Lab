#ifndef NODE_H
#define NODE_H

typedef struct node Node;

Node * node_construct(int key, Node * left, Node * right);
Node * add_recursive(Node *node, int key);
void node_destroy_recursive(Node * node);
Node * return_left(Node * node);
Node * return_right(Node * node);
int find_height(Node * node);


#endif