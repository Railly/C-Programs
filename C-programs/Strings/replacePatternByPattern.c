#include <stdio.h>
#include <string.h>

int main(){                   
    char str[200], pat[20], new_str[200], rep_pat[100];
    int i=0, j=0, k, n=0, copy_loop=0, rep_index=0;
    char* backSlashN;

    printf("\nEnter the string : ");
    fgets(str, sizeof(str), stdin);
    backSlashN = strchr(str, '\n');

    if (backSlashN != NULL){
        *backSlashN = '\0';
    }

    printf("\nEnter the pattern to be replaced: ");
    fgets(pat, sizeof(pat), stdin);
    backSlashN = strchr(pat, '\n');

    if (backSlashN != NULL){
        *backSlashN = '\0';
    }

    printf("\nEnter the replacing pattern: ");
    fgets(rep_pat, sizeof(rep_pat), stdin);
    backSlashN = strchr(rep_pat, '\n');

    if (backSlashN != NULL){
        *backSlashN = '\0';
    }

    while(str[i]!='\0') {
        j=0,k=i;
        while(str[k]==pat[j] && pat[j]!='\0'){
            k++;
            j++;
        }
        if(pat[j]=='\0') {
            copy_loop=k;
            while(rep_pat[rep_index] !='\0') {
                new_str[n] = rep_pat[rep_index];
                rep_index++;
                n++;
            }    
        }
        
        new_str[n] = str[copy_loop];
        i++;
        copy_loop++;
        n++;            
    }
    new_str[n]='\0';
    printf("\nThe new string is : ");
    puts(new_str);
    return 0;
}
    