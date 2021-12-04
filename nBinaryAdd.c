#include <stdio.h>
#include <stdlib.h>

void printing(int Array[],int ind){
    int ii;
    for (ii=0;ii<ind;ii++){
        printf("%d\t",Array[ii]);
    }
}
int main(){
    int N = 5,ii;
    int A[5] = {1,1,1,0,1};
    int B[5] = {1,1,1,0,1};
    int C[6] = {0,0,0,0,0,0};
    printf("Printing A array\n");
    printing(A,5);
    printf("\n");
    printf("Printing B array\n");
    printing(B,5);
    for(ii=N+1;ii>=0;ii--){
        C[ii+1] = C[ii+1] + A[ii] + B[ii];
        if (C[ii+1] == 2) {
            C[ii]=1;
            C[ii+1]=0;
        }
        else if (C[ii+1] == 3) {
            C[ii]=1;
            C[ii+1]=1;
        }
    }
    printf("\n");
    printf("Printing C array\n");
    printing(C,6);

    //printf()

    return 0;
}
