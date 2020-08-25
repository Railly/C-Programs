#include <stdio.h>
#include <string.h>
int main() {
    char str1[100], str2[100];
    char *backSlashN;
    int length, j;

    printf("First String: ");
    fgets(str1, sizeof(str1), stdin);

    //To delete '\n' that stores fgets() function
    backSlashN = strchr(str1, '\n');

    if (backSlashN != NULL){
        *backSlashN = '\0';
    }

    printf("Second String: ");
    fgets(str2, sizeof(str2), stdin);
    // store length of str1 in the length variable
    length = 0;
    while (str1[length] != '\0') {
    ++length;
  }

  // Concatenate str1 to str
  for (j = 0; str2[j] != '\0'; ++j, ++length) {
    str1[length] = str2[j];
  }

  // Terminating str1
  str1[length] = '\0';

  printf("After concatenation: ");
  puts(str1);

  return 0;
}