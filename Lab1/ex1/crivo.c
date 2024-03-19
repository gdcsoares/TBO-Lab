#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "crivo.h"


Vector *vector_construct(int n){
    Vector * v = (Vector*)calloc(1,sizeof(Vector));
    
    v->allocated = n;
    v->size = 0;
    v->data = (data_type*)calloc(v->allocated,sizeof(data_type));

    return v;
}   

void vector_destroy(Vector *v){
    free(v->data);
    free(v);
}

void vector_push_back(Vector *v, data_type val){

    if(v->size==v->allocated){
        v->allocated++;
        v->data = (data_type*)realloc(v->data,v->allocated*sizeof(data_type));
    }

    v->data[v->size]=val;
    v->size++;
}


void marcaNumero(Vector * crivo, int n){
    crivo->data[n]='f';
}

int posNumero(Vector* crivo, int n){
    for(int i = 0; i < crivo->size ; i++){
        if(crivo->data[i]==n){
            return i;
        }
    }
}

int achaNumero(Vector * crivo, int start, int n){
    for(int i = start; i <= n; i++){
        if(crivo->data[i]=='t'){
            return i;
        }
    }
    return 0;
}

void imprimePrimos(Vector * crivo){
    for (int i=2; i < crivo->size; i++){
        if(crivo->data[i]=='t'){
            printf("%d ", i);
        }
    }
    printf("\n");
}