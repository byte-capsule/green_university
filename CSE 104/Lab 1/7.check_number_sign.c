//Write a C program to check whether a number is negative, positive or zero.

#include <stdio.h>

int main() {
    double num;
    printf("Enter a number: ");
    scanf("%lf", &num);
    if (num > 0) {
        printf("%.2lf is positive.\n", num);
    } else if (num < 0) {
        printf("%.2lf is negative.\n", num);
    } else {
        printf("The number is zero.\n");
    }

    return 0;
}
