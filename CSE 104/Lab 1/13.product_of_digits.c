//Write a C program to calculate product of digits of any number.

#include <stdio.h>

int main() {
    int num, temp, remainder;
    int product = 1;
    printf("Enter any number: ");
    scanf("%d", &num);
    temp = num;
    if (temp == 0) {
        product = 0;
    } else {
        while (temp > 0) {
            remainder = temp % 10;
            product *= remainder;
            temp /= 10;
        }
    }

    printf("Product of digits: %d\n", product);

    return 0;
}
