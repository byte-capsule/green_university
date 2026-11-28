//Write a program to find the length of a string using pointers. 

#include <stdio.h>

int main() {
    char str[]="Jeshan";
    char *ptr=str;
    int count=0;
    while(*ptr != '\0'){
        count++;
        ptr++;
    }
    printf("Length of string : %d",count);
    return 0;
}
