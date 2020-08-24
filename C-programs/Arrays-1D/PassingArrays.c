#include <stdio.h>

//Passing individual elements
void passValue(int num){
    printf("%d\n", num);
}

void passAddress(int *num){
    printf("%d\n", num);
}

void passEntireArrayV1(int arr[5]){
    for(int i = 0; i < 5; i++){
        printf("%d", arr[i]);
    }
    printf("\n");
}

void passEntireArrayV2(int *arr){
    for(int i = 0; i < 5; i++){
        printf("%d", arr[i]);
    }
}

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    passValue(arr[3]);
    passAddress(&arr[3]);
    passEntireArrayV1(arr);
    passEntireArrayV2(arr);
}