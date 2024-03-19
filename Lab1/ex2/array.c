#include <stdio.h>
#include <stdlib.h>
#include "array.h"

Array * array_construct(){
    Array * a =(Array*)calloc(1,sizeof(Array));
    a->size = 0;
    a->start = 0;
    a->end = 0;
}

void array_push_front(Array * a, data_type value){
    if(a->size==0){
        a->array[a->start]=value;
    }
    else{
        a->start = (10+a->start-1)%10;
        a->array[a->start]=value;
    }
    a->size++;
}

void array_push_back(Array * a, data_type value){
    if(a->size==0){
        a->array[a->end]=value;
    }
    else{
        a->end= (10+a->end+1)%10;
        a->array[a->end]=value;
    }
    a->size++;
}

data_type array_pop_front(Array * a){
    data_type returned = a->array[a->start];
    a->start = (10+a->start+1)%10;
    a->size--;
    return returned;
}

data_type array_pop_back(Array * a){
    data_type returned = a->array[a->end];
    a->end = (10+a->end-1)%10;
    a->size--;
    return returned;
}

void array_destroy(Array * a){
    free(a);
}