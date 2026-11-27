//Write a program to concatenate two strings into one. 
#include <stdio.h>
#include <string.h>
char str_concat(char str1[],char str2[]){
    int i=0;
    while(str1[i] != '\0'){
        i++;
    }
    int j=0;
    while(str2[j] != '\0'){
        str1[i++]=str2[j++];
    }
    str1[i]='\0';
}
int main(){
    char name[30]="Hi";
    char name_new[30]=" There";
    // using custom function
    str_concat(name,name_new);
    printf("%s",name);
    //using buildin funcction
    strcat(name,name_new);
    printf("%s",name);
}
