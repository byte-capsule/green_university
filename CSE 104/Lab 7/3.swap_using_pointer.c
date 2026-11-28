//Write a program to swap two numbers using pointers. 

#include <stdio.h>
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main() {

    int x = 10;
    int y = 20;

    printf("Before Swapping:\n");
    printf("x = %d, y = %d\n", x, y);

    swap(&x, &y);

    printf("\nAfter Swapping:\n");
    printf("x = %d, y = %d\n", x, y);

    return 0;
}
