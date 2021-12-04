#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[6] = {5, 2, 4, 6, 1, 3};
    int N = 6, ii=0, jj=0,key;

    printf("Unsorted-\n");
    for(ii=0; ii< N; ii++){
        printf("%d\t", array[ii]);
    }

    for(ii=1;ii<N;ii++){
        key=array[ii];
        jj=ii;
        while(jj>=0 & array[jj-1]<key){
            array[jj]=array[jj-1];
            jj = jj-1;
        }
        array[jj] = key;
    }

    printf("\n");
    printf("Sorted-\n");
    for(ii=0; ii< N; ii++){
        printf("%d\t", array[ii]);
    }
    return 0;
}
