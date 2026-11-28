//Write a program to reverse a string using pointers.

#include <stdio.h>
#include <string.h>
void reverse(char *ptr){
    int len=strlen(ptr);
    for(int i=0;i<len/2;i++){
        char temp=*(ptr+i);
        *(ptr+i)=*(ptr+len-1-i);
        *(ptr+len-1-i)=temp;

    }
}
int main() {
    char str[100];
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    reverse(str);
    puts(str);
}
