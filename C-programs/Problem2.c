#include <stdio.h>
#include <stdlib.h>
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_RESET   "\x1b[0m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define INITIAL_CAPACITY 100

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

int rep(int* arr, int size, int code){
    int rep = 0;

    for(int i = 0; i < size; i++){
		if (arr[i] == code){
            rep++;
        }
    }
    return rep;
}

int mode(int* arr, int size){
    int num, mod = 0;
    int repi, codigo_moda;

    for(int i = 0; i < size; i++){
        num = arr[i];
        repi = rep(arr, size, arr[i]);
        if (repi > mod){
            mod = repi;
            codigo_moda = arr[i]; 
        }
    }

    return codigo_moda;
}

void amountMostRepeated(int* arr, int* arr2, int* arr3, int size){
    int mostRep;
    int elem = 0;
    mostRep = mode(arr, size);
    printf(ANSI_COLOR_BLUE"\nCodigo mas repetido: %d\n"ANSI_COLOR_RESET, mostRep);

    for(int i = 0; i < size; i++){
        if(arr[i] == mostRep){
            arr3[elem] = arr2[i];
            elem++;
        }
    }

    printf("Sus elementos: \n");

    for(int k = 0; k < elem; k++){
        printf("Elemento %d: %d\n", k + 1, arr3[k]);
    }
}

void totalProfit(int code, int* arr, int* arr2, int* arr3, int size){
    int profit;
    int total = 0;
    for(int i = 0; i < size; i++){
        if(arr[i] == code){
            profit = arr2[i] * arr3[i];
            total = total + profit;
        }
    }
    printf(ANSI_COLOR_GREEN "\nTotal recaudado por el elemento mas repetido de codigo %d:"ANSI_COLOR_RESET "\n%d soles", code, total);
}

int main(){
    int size, size1, size2 = 0;
    int capacity, capacity1, capacity2 = INITIAL_CAPACITY;
    //Declares parallel arrays
    int* code = malloc(INITIAL_CAPACITY * sizeof(int));
    int* amount = malloc(INITIAL_CAPACITY * sizeof(int));
    int* priceByUnit = malloc(INITIAL_CAPACITY * sizeof(int));

    int* amountMostRep = malloc(INITIAL_CAPACITY * sizeof(int));

    int numSales, codeMostRep;

    int code_aux, amount_aux;
    float priceByUnit_aux;

    printf("Ingrese la cantidad de ventas a realizar: ");
    scanf("%d", &numSales);
    //Scanning values
    for(int i = 0; i < numSales; i++){
        printf(ANSI_COLOR_MAGENTA "\nVenta #%d\n" ANSI_COLOR_RESET , i + 1);
        printf("Ingrese el codigo de herramienta: ");
        scanf("%d", &code_aux);
        
        if (code_aux < 101 || code_aux > 1000){
            printf("Ingrese un codigo valido");
            exit(-1);
        } else {
            push(code, i, code_aux, &size, &capacity);
        }

        printf("Ingrese la cantidad vendida: ");
        scanf("%d", &amount_aux);
        
        if (amount_aux < 0){
            printf("Ingrese una cantidad valida");
            exit(-1);
        } else {
            push(amount, i, amount_aux, &size1, &capacity1);
        }
    
        printf("Ingrese el precio por unidad en soles: ");
        scanf("%f", &priceByUnit_aux);
    
        if(priceByUnit_aux < 0){
            printf("Ingrese una cantidad valida");
            exit(-1);
        } else {
            push(priceByUnit, i, priceByUnit_aux, &size2, &capacity2);
        }

    }
    //Calculate the most repeated code
    codeMostRep = mode(code, numSales);

    //Amount most repeated
    amountMostRepeated(code, amount, amountMostRep, numSales);

    //Total Profit
    totalProfit(codeMostRep, code, amount, priceByUnit, numSales);


    free(code);
    free(amount);
    free(priceByUnit);
    free(amountMostRep);
}