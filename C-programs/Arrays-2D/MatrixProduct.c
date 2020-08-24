#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(){
    int i, j, k;
    int rows1, cols1, rows2, cols2, mul_rows, mul_cols;
    int mat1[5][5], mat2[5][5], mul[5][5];

    printf("\n Enter the number of rows in the first matrix : ");
    scanf("%d",&rows1);
    printf("\n Enter the number of columns in the first matrix : ");
    scanf("%d",&cols1);
    printf("\n Enter the number of rows in the second matrix : ");
    scanf("%d",&rows2);
    printf("\n Enter the number of columns in the second matrix : ");
    scanf("%d",&cols2);

    if(cols1 != rows2){
        printf("\n The number of columns in the first matrix must be equal to"
               "the number of rows in the second matrix");
        getch();
        exit(0);
    }

    mul_rows = rows1;
    mul_cols = cols2;

    printf("\n Enter the elements of the first matrix:\n");
    for(i = 0; i < rows1; i++){
        for(j = 0; j < cols1; j++){
            scanf("%d",&mat1[i][j]);
        }
    }

    printf("\n Enter the elements of the second matrix:\n");
    for(i = 0; i < rows2; i++){
        for(j = 0; j < cols2; j++){
            scanf(" %d",&mat2[i][j]);
        }
    }

    for(i = 0; i < mul_rows; i++){
        for(j = 0; j < mul_cols; j++){
            mul[i][j] = 0;
            for(k = 0; k < mul_cols; k++){
                mul[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    printf("\n The elements of the product matrix are ");
    for(i = 0; i < mul_rows; i++){
        printf("\n");
        for(j = 0; j < mul_cols; j++){
            printf("\t %d", mul[i][j]);
        }
    }

    return 0;
}