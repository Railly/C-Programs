#include <stdio.h>
#include <string.h>

int main(){
    char text[200], str[20], new_text[200];
    int i = 0, j = 0, found = 0, k, n = 0, copy_loop = 0;
    char* backSlashN;

    printf("\nEnter the main text: ");
    fgets(text, sizeof(text), stdin);
    backSlashN = strchr(text, '\n');

    if (backSlashN != NULL){
        *backSlashN = '\0';
    }

    printf("\nEnter the string to be deleted: ");
    fgets(str, sizeof(str), stdin);
    backSlashN = strchr(str, '\n');

    if (backSlashN != NULL){
        *backSlashN = '\0';
    }


    while(text[i] != '\0'){
        j = 0; found = 0; k = i;
        while(text[k] == str[j] && str[j] != '\0'){
            k++;
            j++;
        }
        if (str[j] == '\0'){
            copy_loop = k;
        }
        new_text[n] = text[copy_loop];
        i++;
        copy_loop++;
        n++;
    }

    new_text[n] = '\0';
    
    printf("\nThe new string is: ");
    puts(new_text);

    return 0;
}