//Write a C program to swap first and last digits of any number.

#include <stdio.h>

int main() {
    int num, first_digit, last_digit, temp, swapped_num;
    int divisor = 1;
  printf("Enter any number: ");
  scanf("%d", &num);

    if (num < 10) {
        printf("Swapped number: %d\n", num);
        return 0;
    }

    last_digit = num % 10;
    temp = num;

    while (temp >= 10) {
        temp /= 10;
        divisor *= 10;
    }
    first_digit = temp;
    int middle = (num % divisor) / 10;
    swapped_num = last_digit * divisor + middle * 10 + first_digit;
    printf("Swapped number: %d\n", swapped_num);

    return 0;
}
