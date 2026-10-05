//Write a C program to print all alphabets from a to z.

#include <stdio.h>

int main() {
    char ch = 'a';
    printf("Alphabets from a to z:\n");
    do {
        printf("%c ", ch);
        ch++;
    } while (ch <= 'z');

    printf("\n");

    return 0;
}
