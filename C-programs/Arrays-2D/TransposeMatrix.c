#include <stdio.h>

int main(){
    int i, j, mat[3][3], transposed_mat[3][3];
    printf("\nEnter the elements of the 3x3 matrix:\n");

    for(i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\n The elements of the matrix are: ");

    for(i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("\t %d", mat[i][j]);
        }
    }

    //Transposes the matrix
    for(i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            transposed_mat[i][j] = mat[j][i];
        }
    }

    printf("\n The elements of the transposed matrix are: ");

    for(i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("\t %d", transposed_mat[i][j]);
        }
    }

    return 0;
}