//Write a program to compare two strings and display whether they are equal or not.
#include <stdio.h>
#include <string.h>
int is_equal(char str1[],char str2[]){
    int i=0;
    while (str1[i] != '\0' || str2[i] != '\0'){
        if(str1[i] != str2[i]){
            return 0;
        }
        i++;
    }
    return 1;
}
int main(){
    char string1[30]="Hi";
    char string2[30]="Hi";
    // using custom function
    printf("%s",is_equal(string1,string2) ? "Equal":"Not Equal");

    //using buildin funcction
    printf("%s",strcmp(string1,string2)==0 ? "Equal":"Not Equal");
}
