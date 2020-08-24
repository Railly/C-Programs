#include <stdio.h>
#include <stdlib.h>

#define INITIAL_CAPACITY 2

void push(int* arr, int index, int value, int* size, int* capacity){
    if(*size > *capacity){
        realloc(arr, sizeof(arr)* 2);
        *capacity = sizeof(arr) * 2;
    }

    arr[index] = value;
    *size = *size + 1;
}



int main(){
    
    int size = 0;
    int capacity = INITIAL_CAPACITY;
    int* arr = malloc(INITIAL_CAPACITY * sizeof(int));

 
    push(arr, 0, 1, &size, &capacity);
    push(arr, 1, 2, &size, &capacity);
    push(arr, 2, 3, &size, &capacity);

    printf("Current capacity: %d\n", capacity);

    push(arr, 3, 4, &size, &capacity);
    push(arr, 4, 5, &size, &capacity);
    push(arr, 5, 6, &size, &capacity);

    printf("Current capacity: %d\n", capacity);
}