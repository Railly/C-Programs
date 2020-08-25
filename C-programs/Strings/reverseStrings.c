#include <stdio.h>
#include <string.h>

int main(){
    char str[100], substr[100];
    int i = 0, j = 0, position, length;

    printf("\nEnter the main string: ");
    fgets(str, sizeof(str), stdin);

    printf("\nEnter the position where the substring starts: ");
    scanf("%d", &position);

    printf("\nEnter the length of the substring: ");
    scanf("%d", &length);

    i = position;

    while(str[i] != '\0' && length > 0){
        substr[j] = str[i];
        i++;
        j++;
        length--;
    }

    substr[j] = '\0';

    printf("\nThe substring is: ");
    puts(substr);

    return 0;
}