#include <stdio.h>
#include <stdlib.h>
#include "binarytree.h"

struct bt{
    Node * root;
    int size;
};

BinaryTree * binary_tree_construct(){
    return (BinaryTree*)calloc(1,sizeof(BinaryTree));
}

void binary_tree_add(BinaryTree *bt, int key) {
    bt->root = add_recursive(bt->root, key);
    bt->size++;
}

void binary_tree_destroy(BinaryTree * bt){
    node_destroy_recursive(bt->root);
    if(bt!=NULL){
        free(bt);
    }
}

int binary_tree_height(BinaryTree * bt){
    return find_height(bt->root);
}