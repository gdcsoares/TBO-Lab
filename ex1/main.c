#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "crivo.h"

int main(){

    int n;
    scanf("%d", &n);

    return 0;
    Vector * crivo = vector_construct(n);

    int pos=0;

    for(int i=0; i <= n; i++){
        char str[6];
        strcpy(str,"true");
        vector_push_back(crivo,str);
        pos++;
    }

    int num = 2;

    while(num!=0){
        
        int start = posNumero(crivo,num)+1;

        for(int i = start; i <= n; i++){
            if(achaNumero(crivo,i)%num==0){
                marcaNumero(crivo,i);
            }
        }

        num = 0;

        for(int i = start; i <= n; i++){
            if(achaNumero(crivo,i)!=0){
                num = achaNumero(crivo,i);
                break;
            }
        }

    }

    imprimePrimos(crivo);

    vector_destroy(crivo);

    return 0;
}
