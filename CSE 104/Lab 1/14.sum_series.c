//Write a program in C to find the sum of the series 1 +11 + 111 + 1111 + .. n terms. 

#include <stdio.h>

int main() {
    int n;
    int term = 0, sum = 0;
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);
    printf("Series: ");
    for (int i = 1; i <= n; i++) {
        term = term * 10 + 1;
        sum += term;
        printf("%lld", term);
        if (i < n) {
            printf(" + ");
        }
    }
    printf("\nSum of the series = %lld\n", sum);

    return 0;
}
