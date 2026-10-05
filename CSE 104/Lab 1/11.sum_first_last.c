//Write a C program to find sum of first and last digit of any number.

#include <stdio.h>

int main() {
    int num, first_digit, last_digit, sum;

    printf("Enter any number: ");
    scanf("%d", &num);

    last_digit = num % 10;
    for (first_digit = num; first_digit >= 10; first_digit /= 10) {
        
    }
    sum = first_digit + last_digit;

    printf("First digit: %d\n", first_digit);
    printf("Last digit: %d\n", last_digit);
    printf("Sum of first and last digit: %d\n", sum);

    return 0;
}
