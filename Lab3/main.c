#include "item.h"
#include <stdio.h>
#include <stdlib.h>

extern void sort(Item *a, int lo, int hi);

int main(){

    int n;

    scanf("%d",&n);

    Item * array = (Item*)calloc(n,sizeof(Item));

    for(int i=0; i<n; i++){
        int item;
        scanf("%d",&item);
        array[i]=item;
    }

    sort(array,0,n-1);
    printf("ORDENADO:\n");
    
    for(int i=0; i<n; i++){
        printf("%d\n",array[i]);
    }

    free(array);

    return 0;
}