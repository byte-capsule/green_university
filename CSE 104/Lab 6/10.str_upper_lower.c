//Write a program to convert all characters in a string to uppercase and lowercase.

#include <stdio.h>
#include <string.h>

void to_upper(char str[]){
    int i=0;
    while(str[i]!='\0'){
        if(str[i]>='a' && str[i]<='z')
            str[i]=str[i]-32;
        i++;
    }
}
void to_lower(char str[]){
    int i=0;
    while(str[i]!='\0'){
        if(str[i]>='A' && str[i]<='Z')
            str[i]=str[i]+32;
        i++;
    }
}
int main(){
    char string[]="JesHaN";
    to_upper(string);
    puts(string);
    to_lower(string);
    puts(string);
    
    

}
