#include <stdio.h>
#include <stdlib.h>

int main(){
    int** arr;
    int i, j, ROWS, COLS;
    //Scanning number of rows and columns
    printf("\nEnter the number of rows: ");
    scanf("%d", &ROWS);
    printf("Enter the number of columns: ");
    scanf("%d", &COLS);
    printf("\n");
    /*Declaring a pointer-to-pointers-to-int variable (HEAD)
     * with initial size of #ROWS*/
    arr = (int**)malloc(ROWS * sizeof(int*));
    //Handling possible errors
    if(arr == NULL){
        printf("\n Memory could not be allocated");
        exit(-1);
    }
    //
    for( i = 0; i < ROWS; i++){
    /*Declaring a pointer-to-int variable
     * with initial size of #COLS*/
        arr[i] = (int*)malloc(COLS * sizeof(int));

        //Handling possible errors
        if(arr[i] == NULL){
            printf("\n Memory allocation failed");
            exit(-1);
        }
    }
    //Scanning dynamic array values
    printf("Enter the values of the array: \n");
    for(i = 0; i < ROWS; i++){
        for(j = 0; j < COLS; j++){
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    //Printing dynamic array values
    printf("\nThe array is as follows: \n");
    for(i = 0; i < ROWS; i++){
        for(j = 0; j < COLS; j++){
            printf("Element[%d][%d]: %d\n", i, j, arr[i][j]);
        }
    }

    //Freeing rows
    for(i = 0; i < ROWS; i++){
        free(arr[i]);
    }
    //Freeing the int** variable arr
    free(arr);
    
    return 0;
}