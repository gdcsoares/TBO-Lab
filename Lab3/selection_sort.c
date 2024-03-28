#include <stdio.h>
#include <stdlib.h>
#include "item.h"

void sort(Item * a, int lo, int hi){

    for(int i=lo; i < hi; i++){
        int idx_menor = i;

        for(int j=i+1; j <= hi; j++){
            if(less(a[j],a[idx_menor])){
                idx_menor=j;
            }
        }
        exch(a[i],a[idx_menor]);
    }
}
