//Write a program to copy one string into another without using library functions.
#include <stdio.h>
int main(){
    char name[]="Jeshan Akand";
    char new_name[30];
    int i=0;
    while(name[i]!='\0'){
        new_name[i]=name[i];
        printf("%c",new_name[i]);
        i++;
    }

    return 0;

}
