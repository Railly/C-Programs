#include <stdio.h>

//Passing individual elements
void passValue(int num){
    printf("PV: %d\n", num);
}

//Passing a row
void passRow(int arr[]){
    int i;
    for(i = 0; i < 3; i++){
        printf("PR: %d\n", arr[i] * 10);
    }
}

//Passing the entire 2D Array
void passEntireMatrix(int arr[2][3]){
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            printf("PEM: %d\n", arr[i][j]);
        }
    }
    printf("\n");
}

int main(){
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    passValue(arr[1][1]);
    passRow(arr[1]);
    passEntireMatrix(arr);
}