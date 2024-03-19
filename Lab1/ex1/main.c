#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "crivo.h"

int main(){

    int n;
    scanf("%d", &n);

    Vector * crivo = vector_construct(n);

    int pos=0;

    for(int i=0; i <= n; i++){
        char str = 't';
        vector_push_back(crivo,str);
        pos++;
    }

    int num = 2;

    while(num!=0){
        
        int start = num + 1;

        for(int i = start; i <= n; i++){
            if(i % num==0){
                marcaNumero(crivo,i);
            }
        }

        num = achaNumero(crivo,start,n);
    }

    imprimePrimos(crivo);

    vector_destroy(crivo);

    return 0;
}
