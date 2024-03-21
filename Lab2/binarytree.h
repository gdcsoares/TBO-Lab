#ifndef BT_H
#define BT_H

#include "node.h"

typedef struct bt BinaryTree;

BinaryTree * binary_tree_construct();
void binary_tree_add(BinaryTree *bt, int key);
void binary_tree_destroy(BinaryTree * bt);
int binary_tree_height(BinaryTree * bt);


#endif
