//Write a program to display the address and value of a variable using a pointer.

#include <stdio.h>


int main(){

        int a = 10;
        int *ptr;
    
        ptr = &a;
        printf("Value of a: %d\n", a);
        printf("Address of a: %p\n", &a);
    
        printf("Value using pointer: %d\n", *ptr);
        printf("Address stored in pointer: %p\n", ptr);
    
        printf("Address of pointer: %p\n", &ptr);
    
        return 0;
    }
