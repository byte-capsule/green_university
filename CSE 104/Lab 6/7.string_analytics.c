//Write a program to count the number of vowels, consonants, digits, and spaces in a given string. 

#include <stdio.h>
#include <string.h>

void string_analysis(char str[]) {
    int capital = 0, small = 0, vowel = 0, consonant = 0;
    int space = 0, digit = 0, unknown = 0;

    char arr_vowels[] = {'a', 'e', 'i', 'o', 'u'};

    int i = 0;

    while (str[i] != '\0') {
        char ch = str[i];

        if ((ch >= 'A' && ch <= 'Z') ||
            (ch >= 'a' && ch <= 'z')) {

            int is_found = 0;

            for (int j = 0; j < 5; j++) {
                if (ch == arr_vowels[j] || ch == arr_vowels[j] - 32) {
                    vowel++;
                    is_found = 1;
                    break;
                }
            }

            if (is_found == 0)
                consonant++;

            if (ch >= 'A' && ch <= 'Z')
                capital++;
            else
                small++;
        }
        else if (ch == ' ')
            space++;
        else if (ch >= '0' && ch <= '9')
            digit++;
        else
            unknown++;

        i++;
    }

    printf("Capital: %d\n", capital);
    printf("Small: %d\n", small);
    printf("Vowels: %d\n", vowel);
    printf("Consonants: %d\n", consonant);
    printf("Spaces: %d\n", space);
    printf("Digits: %d\n", digit);
    printf("Special characters: %d\n", unknown);
}

int main(){
    char string1[30]="Jeshan Akand";
    string_analysis(string1);
}
