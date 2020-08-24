#include <stdio.h>

int main(){
    int arr[] = {1, 2, 3, 4, 5};

    printf("\n Address of array = %p %p %p", arr, &arr[0], &arr);

    int *ptr = &arr[0];
    int *ptr1, *ptr2;

    ptr1 = arr;
    ptr2 = arr + 2;

    ptr++;
    printf("\n The value of the second element of the arrat is: %d", *ptr);

    printf("\n %d", arr[2]);
    printf("\n %d", *(arr + 2));
    printf("\n %d", 2[arr]);
    printf("\n %d", ptr2 - ptr1);
    return 0;
}