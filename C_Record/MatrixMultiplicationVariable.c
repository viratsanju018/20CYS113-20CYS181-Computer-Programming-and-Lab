#include <stdio.h>

int main() {
    int rowsA, rowsB, i, j, k;
    
 
    scanf("%d", &rowsA);
    
   
    scanf("%d", &rowsB);
    
    if (rowsA != rowsB) {
        printf("Error \n");
        return 0;
    }
    
    int matrixA[rowsA][rowsA], matrixB[rowsB][rowsB], result[rowsA][rowsB];
    
    for (i = 0; i < rowsA; i++) {
        for (j = 0; j < rowsA; j++) {
            scanf("%d", &matrixA[i][j]);
        }
    }
    
 
    for (i = 0; i < rowsB; i++) {
        for (j = 0; j < rowsB; j++) {
            scanf("%d", &matrixB[i][j]);
        }
    }
    
    for (i = 0; i < rowsA; i++) {
        for (j = 0; j < rowsB; j++) {
            result[i][j] = 0;
            for (k = 0; k < rowsA; k++) {
                result[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }
    
    for (i = 0; i < rowsA; i++) {
        for (j = 0; j < rowsB; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}