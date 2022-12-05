#include <stdio.h>
#include <stdlib.h>
#include "mylib/mylib.h"

int main(){
    int N, i;
    printf("Matrix size:\n");
    scanf("%d", &N);
    
    if(N <= 1){
        printf("N needs to be greater than 1\n");
        return 0;
    }
    else{
    int *matrix = (int *) malloc(N*N*sizeof(int));
    int *vector = (int *) malloc(N*sizeof(int));
    int *result = (int *) malloc(N*sizeof(int));

    printf("Enter matrix values:\n");
    for(i = 0; i < N*N; i++){
        scanf("%d", &matrix[i]);
    }
    printf("Matrix = \n");
    printMat(matrix, N);

    printf("Enter vector values:\n");
    for(i = 0; i < N; i++){
        scanf("%d", &vector[i]);
    }
    printf("Vector = \n");
    printVec(vector, N);

    matVecMult(matrix, vector, result, N);

    printf("Result = \n");
    printVec(result, N);

    free(matrix);
    free(vector);
    free(result);
    }
    return 0;
}
