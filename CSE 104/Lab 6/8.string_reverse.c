//Write a program to reverse a string manually (without using strrev()).

#include <stdio.h>
#include <string.h>

void string_reverse(char str[]){
    int char_count=0;
    while(str[char_count] != '\0'){
        char_count++;
     }
    for(int i=0;i<char_count/2;i++){
        int temp=str[i];
        str[i]=str[char_count-1-i];
        str[char_count-1-i]=temp;
    }
}
int main(){
    char string1[30]="Jeshan Akand";
    //without using strrev
    string_reverse(string1);
    printf("%s",string1);
    //with using strrev
    strrev(string1);
    printf("\n%s",string1);

}
