//Write a program to remove all spaces from a given string. 

#include <stdio.h>

void remove_spaces(char str[]) {
    int i = 0, j = 0;

    while (str[i] != '\0') {
        if (str[i] != ' ') {
            str[j++] = str[i];
        }
        i++;
    }

    str[j] = '\0';
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    remove_spaces(str);

    printf("String after removing spaces: %s", str);

    return 0;
}
