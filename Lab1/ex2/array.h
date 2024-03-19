#ifndef ARRAY_H
#define ARRAY_H

typedef int data_type;

typedef struct Array{
    data_type array[10];
    int start;
    int end;
    int size;
}Array;

Array * array_construct();
void array_push_front(Array * a, data_type value);
void array_push_back(Array * a, data_type value);
data_type array_pop_front(Array * a);
data_type array_pop_back(Array * a);
void array_destroy(Array * a);







#endif