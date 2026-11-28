//Write a program to remove all spaces from a given string.

#include <stdio.h>
#include <string.h>

void remove_space(char str[]){
    int i=0;
    int j=0;
    while(str[i]!='\0'){
        if(str[i]!=' '){
            str[j]=str[i];
            j++;
        }
        i++;
    }
    str[j] = '\0';
}

int main(){
    char string[]="JesHaN Akand";
    remove_space(string);
    puts(string);
}
