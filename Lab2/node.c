#include <stdio.h>
#include <stdlib.h>
#include "node.h"

struct node{
    int key;
    Node * left_son;
    Node * right_son;
};

Node * node_construct(int key, Node * left, Node * right){
    Node * node = (Node*)calloc(1,sizeof(Node));
    node->key = key;
    node->left_son = left;
    node->right_son = right;

    return node;
}

Node * add_recursive(Node *node, int key) {
    if (node == NULL){
        return node_construct(key, NULL, NULL);
    }
    if (node->key > key){
        node->left_son = add_recursive(node->left_son, key);
    }
    else if (node->key < key){
        node->right_son = add_recursive(node->right_son, key);
    }
    else{
        
    }

    return node;
}


void node_destroy_recursive(Node * node){
    if(node!=NULL){
        node_destroy_recursive(node->left_son);
        node_destroy_recursive(node->right_son);
        if(node!=NULL){
            free(node);
        }
    }
}

Node * return_left(Node * node){
    return node->left_son;
}

Node * return_right(Node * node){
    return node->right_son;
}

int find_height(Node * node){
    if(node==NULL){
        return -1;
    }
    else{
        int left_height = find_height(return_left(node));
        int right_height = find_height(return_right(node));

        if(left_height < right_height){
            return right_height+1;
        }
        else{
            return left_height+1;
        }
    }
}