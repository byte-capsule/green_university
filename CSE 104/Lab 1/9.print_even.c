//Write a C program to print all even number 1 to 100

#include <stdio.h>

int main() {
    int i = 2;
    printf("Even numbers from 1 to 100:\n");
    do {
        printf("%d ", i);
        i += 2;
    } while (i <= 100);

    printf("\n");

    return 0;
}
