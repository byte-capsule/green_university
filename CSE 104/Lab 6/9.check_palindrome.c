//Write a program to check whether a string is a palindrome

#include <stdio.h>
#include <string.h>
int main(){
    char string[]="EYE";
    char original[30];

    strcpy(original,string);
    strrev(string);
    printf("%s",strcmp(original,string)==0 ? "palindrome": "Not palindrome");
    

}
