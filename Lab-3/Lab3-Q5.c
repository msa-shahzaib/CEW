#include <stdio.h>

int main(){
int r1 = 2;
int c1 = 2;
int r2 = 2;
int c2 = 2;
int mat1[r1][c1];
int mat2[r2][c2];

if(r1 == r2 && c1 == c2){
    printf("Matrix: 1\n");
    for(int i = 0;i < r1;i++){
        for(int j = 0;j < c1;j++){
            printf("Enter element at [%d,%d]: ",i,j);
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("\nMatrix: 2\n");
    for(int i = 0;i < r2;i++){
        for(int j = 0;j < c2;j++){
            printf("Enter element at [%d,%d]: ",i,j);
            scanf("%d",&mat2[i][j]);
        }
    }

    for(int i = 0;i < r1;i++){
        for(int j = 0;j < c1;j++){
            mat1[i][j] = *(mat1[i] + j) + *(mat2[i] + j);
        }
    }
    printf("\nSum of matrices:\n");
    for(int i = 0;i < r1;i++){
        for(int j = 0;j < c1;j++){
            printf("%d ",mat1[i][j]);
        }
        printf("\n");
    }
}
else{
    printf("The matrices can not be added!");
}
return 0;
}

