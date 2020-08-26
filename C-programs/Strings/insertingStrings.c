#include <stdio.h>
#include <string.h>

int main(){
    char text[100], str[20], inserted[100];
    int i = 0, j = 0, k = 0, pos;
    char* backSlashN;

    printf("\nEnter the main text: ");
    fgets(text, sizeof(text), stdin);
    
    printf("\nEnter the string to be inserted: ");
    fgets(str, sizeof(str), stdin);
    //To delete '\n' that stores fgets() function
    backSlashN = strchr(str, '\n');

    if (backSlashN != NULL){
        *backSlashN = '\0';
    }

    printf("\nEnter the position where the string has to be inserted: ");
    scanf("%d", &pos);

    while(text[i] != '\0'){
        if(i == pos){
            while(str[k] != '\0'){
                inserted[j] = str[k];
                j++;
                k++;
            }
            inserted[j] = text[i];
            j++;
        } else {
            inserted[j] = text[i];
            j++;
        }
        
        i++;
    }

    inserted[j] = '\0';

    printf("\nThe new string is: ");
    puts(inserted);

    return 0;
}