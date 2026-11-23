//1. Write a program to read and print a string using gets() and puts() functions.

#include <stdio.h>
int main(){
    char string[100];
    printf("Enter a string :");
    fgets(string,100,stdin);
    puts(string);
    return 0;
}
