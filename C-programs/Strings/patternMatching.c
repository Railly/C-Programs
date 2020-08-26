#include <stdio.h>
#include <string.h>

int main(){
    char text[100], pattern[100];
    int max, index = -1;
    int i = 0, position = 0, k, j;
    int text_length, pattern_length;
    char* backSlashN;

    printf("Enter the text: ");
    fgets(text, sizeof(text), stdin);

    backSlashN = strchr(text, '\n');

    if (backSlashN != NULL){
        *backSlashN = '\0';
    }

    printf("Enter the pattern to be searched: ");
    fgets(pattern, sizeof(pattern), stdin);

    backSlashN = strchr(pattern, '\n');

    if (backSlashN != NULL){
        *backSlashN = '\0';
    }

    text_length    = strlen(text);
    pattern_length = strlen(pattern);

    max = text_length - pattern_length + 1;

    for(i = 0; i < max; i++){
        position = k = i;
        for(j = 0; j < pattern_length; j++){
            if(pattern[j] == text[k]){
                k++;
            } else {
                break;
            }
        }
         if(j == pattern_length){
            index = position;
        }
    }

    if(index != -1){
        printf("The pattern starts at index #%d\n", index);
    } else {
        printf("Pattern not found\n");
    }
}