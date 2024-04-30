#include <stdio.h>
#include <stdlib.h>
#include "item.h"

void sort(Item *a, int lo, int hi) {
    int swapped;

    for (int i = lo; i <= hi; i++) {
        swapped = 0;
        for (int j = lo; j <= hi-1-i; j++) {

            if(less(a[j+1],a[j])){
                exch(a[j+1],a[j]);
                swapped = 1;
            }
        }

        if(swapped==0){
            break;
        }
    }
}