#include <stdio.h>

int main(){
    char str[100];
    int i = 0, length;

    //clrscr();

    printf("\nEnter the string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0'){
        i++;
    }
    
    length = i;

    printf("\nThe length of the string is: %d\n", length);
    //getch();

    return 0;
}