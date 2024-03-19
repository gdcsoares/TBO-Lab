#ifndef CRIVO_H
#define CRIVO_H

typedef char data_type;

typedef struct
{
    data_type *data;
    int size;
    int allocated;

} Vector;

Vector *vector_construct(); 

void vector_destroy(Vector *v); 

void vector_push_back(Vector *v, data_type val); 

void marcaNumero(Vector * crivo, int n);

int posNumero(Vector * crivo, int n);

int achaNumero(Vector * crivo, int start,int n);

void imprimePrimos(Vector * crivo);








#endif