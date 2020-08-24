#include <stdio.h>

int main(){
    int arr[2][2] = {{1, 2}, {3, 4}};

    printf("%d\n", &arr[0][0]);
    printf("%d\n", arr[0]);
    printf("%d\n", arr);
    printf("%d\n", &arr[0]);

    printf("*********************\n");

    printf("%d\n", &arr[0][0] + 1);
    printf("%d\n", arr[0] + 1);
    printf("%d\n", arr + 1);
    printf("%d\n", &arr[1]);
    printf("%d\n", &arr[0] + 1);

    printf("*********************\n");
    
    printf("%d\n", *(&arr[0][0] + 1));
    printf("%d\n", *(arr[0] + 1));
    printf("%d\n", **(arr + 1));
    printf("%d\n", **(&arr[1]));
    printf("%d\n", **(&arr[0] + 1));
    printf("%d\n", *(arr + 1)[0]);
}