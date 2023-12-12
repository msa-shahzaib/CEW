#include <stdio.h>
#include "matrix_ops.h"

int main(){
    int mat1[][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int mat2[][3] = {{2,4,3},{3,4,1},{2,1,0}};
    int r1 = sizeof(mat1) / sizeof(mat1[0]);
    int r2 = sizeof(mat2) / sizeof(mat2[0]);
    int c1 = sizeof(mat1[0]) / sizeof(mat1[0][0]);
    int c2 = sizeof(mat2[0]) / sizeof(mat2[0][0]);
    int mat[r1][c2];
    printf("Addition of matrices:\n");
    m_add(mat1, mat2, r1, c1, r2, c2);
    printf("\nMultiplication of matrices:\n");
    m_multiply(mat1, mat2, r1, c1, r2, c2);
    printf("\nTranspose of matrix:\n");
    m_transpose(mat2, r2, c2);
    printf("\nMatrix:\n");
    for(int i = 0; i < r2; i++){
        for(int j = 0; j < c2; j++){       
            printf("%5d",mat2[i][j]);
        }
        printf("\n");
    }
    printf("\nDeterminant of matrix: ");
    int d = m_determinant(mat2, r2, c2);
    printf("%d",d);
    return 0;
}

