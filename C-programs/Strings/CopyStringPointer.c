#include <stdio.h>
#include <string.h>

int main(){
    char str[100], copy_str[100];
    char *pstr, *pcopy_str, *pcopy_str2;
    char *backSlashN;

    pstr = str;
    pcopy_str = copy_str;
    pcopy_str2 = copy_str;

    printf("\nEnter a string: ");
    fgets(str, sizeof(str), stdin);
    backSlashN = strchr(str, '\n');

    if (backSlashN != NULL){
        *backSlashN = '\0';
    }

    while(*pstr != '\0'){
        *pcopy_str = *pstr;
        pstr++, pcopy_str++;
    }



    printf("\nThe copied text is: ");

    while(*pcopy_str2 != '\0'){
        printf("%c", *pcopy_str2);
        pcopy_str2++;
    }

    printf("\n");
    
    return 0;

}