#include <stdio.h>
#include <string.h>

    void ifStart_CE(char arr[], int num){
        //Declares the variables
        int total = 0, c = 0, e = 0;
        float pct_c, pct_e;
        //If the array starts with 'C' or 'E'
        if(arr[0] == 'c' || arr[0] == 'C'){
            c++;
        }
        if(arr[0] =='e' || arr[0] == 'E'){
            e++;
        }
        //If a new word after a whitespace starts with 'C' or 'E'
        for(int i = 0; i < num; i++){
            if(arr[i] == ' '){
                //If starts with 'c' or 'C'
                if(arr[i + 1] == 'c' || arr[i + 1] == 'C'){
                    c++;
                }
                //If starts with 'e' or 'E'
                if(arr[i + 1] == 'e' || arr[i + 1] == 'E'){
                    e++;
                }
                //Counts the total of words
                total++;
            }
        }
        //Calculates the percentage
        pct_c = (float)c/ (total + 1) * 100;
        pct_e = (float)e/ (total + 1) * 100;
        //Prints the usage of each word in % and the total
        printf("\nPalabras que empiezan con C: %.1f%%\n", pct_c);
        printf("Palabras que empiezan con E: %.1f%%\n", pct_e);
        printf("Total: %d\n", total + 1);
    }


void Dynamic_CE(char str[], int num){
    //Declares the Dynamic Array
    char *DynamicArray[40];
    //Declares a variable for storing the number of words
    int words;
    //Declaares the token = " " for using it in strtok
    char *token = strtok(str, " ");
    //Declares a counter
    int i = 0;
    //Fills the Dynamic Array if the word starts with 'C' or 'E'
    while( token != NULL ) {
        if(token[0] == 'C' || token[0] == 'E' || token[0] == 'c' || token[0] == 'e'){
            DynamicArray[i] = token;
            i++;
            words = i;
        }
        token = strtok(NULL, " ");
    }
    //Prints the Dynamic Array
    printf("{ ");
    for(int j = 0; j < words; j++){
        printf("%s ", *(DynamicArray + j));
    }
    printf("}\n");
}
  


int main(){
    //Paragraph with less than 1000 characters
    char par[] = "Habia una vez un perrito llamado Susano Milaneso, vino Susan y se lo comio."
                  " Ella era muy mala y por eso vivia sola en Junin. Siempre me pide ayuda para"
                  " resolver su tarea. Que de hecho, es muy izi. Ella quiere que tengamos milanesitos"
                  " lo que no sabe, es que ella los va a cuidar uwu.";
    //Calling functions
    printf("***********************\n");
    ifStart_CE(par, sizeof(par));
    Dynamic_CE(par, sizeof(par));
    printf("\n*********************");
}