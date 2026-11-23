// Write a program to find the length of a string manually and using the strlen() function.

#include <stdio.h>
#include <string.h>
int string_length(char arr[]){
    int i;
    while(arr[i] != '\0'){
        i++;
    }
    return i;
}
int main(){
    char name[]="Jeshan Akand";
    //print using strlen function
    printf("String Length: %d\n",strlen(name));
    //print using user defined function
    printf("String Length: %d",string_length(name));

    return 0;

}
