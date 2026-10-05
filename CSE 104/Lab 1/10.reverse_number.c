//Write a C program to enter a number and print its digit in reverse order.

#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);
    int temp = num;
    do {
        remainder = temp % 10;
        reversed = reversed * 10 + remainder;
        temp /= 10;
    } while (temp != 0);

    printf("Reversed number: %d\n", reversed);

    return 0;
}
