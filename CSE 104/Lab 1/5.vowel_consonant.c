//Write a Program to take the value from the user as input any alphabet and check whether it is vowel or
consonant.
#include <stdio.h>

int main() {
    char ch;
    printf("Enter a lowercase alphabet: ");
    scanf(" %c", &ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("'%c' is a vowel.\n", ch);
    } 
    else {
        printf("'%c' is a consonant.\n", ch);
    }

    return 0;
}
