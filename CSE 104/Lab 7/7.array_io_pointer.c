//Write a program to access and display the elements of an array using pointers.

#include <stdio.h>

int main() {
   int arr[10];
   int *ptr=arr;
   printf("Enter 5 elements :\n");
   //input using pointer
   for(int i=0;i<5;i++){
        scanf("%d",(ptr+i));
   }
   //output using pointer
   for(int i=0;i<5;i++){
        printf("%d",*(ptr+i));
   }
  
}
