//Write a program to demonstrate the concept of pointer to pointer. 

#include <stdio.h>

int main() {
    int num = 100;

    int *ptr = &num;
    int **ptr2 = &ptr;

    printf("Value of num: %d\n", num);

    printf("Address of num: %p\n", &num);

    printf("Value of ptr: %p\n", ptr);

    printf("Address of ptr: %p\n", &ptr);

    printf("Value of ptr2: %p\n", ptr2);

    printf("Value using ptr: %d\n", *ptr);

    printf("Value using ptr2: %d\n", **ptr2);

    return 0;
}
