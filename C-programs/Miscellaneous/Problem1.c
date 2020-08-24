#include <stdio.h>
#include <stdlib.h>
#define INITIAL_CAPACITY 2

//Pushes elements in the dynamic array
void push(int* arr, int index, int value, int* size, int* capacity){
    /*if size is greater than capacity, then reallloc function will
      duplicate the current size*/
    if(*size > *capacity){
        realloc(arr, sizeof(arr)* 2);
        *capacity = sizeof(arr) * 2;
    }
    //Else the value will be asign to the index, and the size will be incremented by one
    arr[index] = value;
    *size = *size + 1;
}

//Calculates the marks' average
int calculateAverage(int* arr, int num){
    int sum = 0;
    float average;
    for(int i = 0; i < num; i++ ){
        sum = sum + arr[i];
    }
    average = (float)sum / num;
    printf("Promedio: %.2f\n\n", average);

    return average;
}

//Calculates the marks that are better than the average
void marksBetterAverage(int* arr, int* arr2, int num, int avr){
    int size = 0;
    int capacity = INITIAL_CAPACITY;
    int len = 0;
    /*Pushing the marks that are better than the average into
      the new dynamic array "arr2" */
    for(int i = 0; i < num; i++){
        if(arr[i] > avr){
            push(arr2, len, arr[i], &size, &capacity);
            len++;
        }
    }
    printf("Notas superiores al promedio:\n\n");

    for(int k = 0; k < len; k++){
        printf("Nota %d: %d\n", k + 1, arr2[k]);
    }
}



int main(){
    int average, size = 0;
    int capacity = INITIAL_CAPACITY;
    //Declares a dynamic array called marks
    int* marks = malloc(INITIAL_CAPACITY * sizeof(int));
    //Declares a dynamic array calles marks
    int* betterMarks = malloc(INITIAL_CAPACITY * sizeof(int));
    //Declares the number of exams, and the values of each one
    int num_ex, value;

    printf("Ingrese la cantidad de examenes: ");
    scanf("%d", &num_ex);
    //Scanning the marks and pushing them into the dynamic array "marks"
    for(int i = 0; i < num_ex; i++){
        printf("Nota %d: ", i + 1);
        scanf("%d", &value);
        push(marks, i, value, &size, &capacity);
    }
    
    printf("\n");

    //Calculates the average of the marks
    average = calculateAverage(marks, num_ex);
    //Calculates which marks are better than the average
    marksBetterAverage(marks, betterMarks, num_ex, average);
}