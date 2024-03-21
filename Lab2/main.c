#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "binarytree.h"

int main(){

    BinaryTree * tree = binary_tree_construct();

    srand(time(NULL)); 

    int N;
    scanf("%d", &N);

    for(int i=0; i < N; i++){
        int r = rand();
        binary_tree_add(tree,r);
    }

    int height = binary_tree_height(tree);
    printf("%d\n",height);
    
    binary_tree_destroy(tree);
    
    return 0;
}