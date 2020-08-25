#include <stdio.h>
#include <string.h>

int main(){
    char str1[50], str2[50];
    int i = 0, len1 = 0, len2 = 0, same = 0;

    printf("\nEnter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("\nEnter the string string: ");
    fgets(str2, sizeof(str2), stdin);

    len1 = strlen(str1);
    len2 = strlen(str2);

    if(len1 == len2){
        while(i < len1){
            if(str1[i] == str2[i]){
                i++;
            } else {
                break;
            }
        } 

        if(i == len1){
            same = 1;
            printf("\nThe two strings are equal\n");        }
    }

    if(len1 != len2){
        printf("\nThe two strings are not equal\n");
    }

    if(same == 0){
        if(str1[i] > str2[i]){
            printf("\nString 1 is greater the String 2\n");
        } else if(str1[i] < str2[i]) {
            printf("\nString 2 is greater than String 1\n");
        }
    }

    return 0;
}