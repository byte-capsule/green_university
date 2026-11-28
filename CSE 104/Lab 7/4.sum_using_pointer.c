//Write a program to add two numbers using pointers.

#include <stdio.h>
void add(int *a,int *b,int *sum){
    *sum=*a+*b;   
}
int main() {

    int x = 10;
    int y = 20;
    int result;

    add(&x,&y,&result);
    printf("Result : %d",result);
    return 0;
}
