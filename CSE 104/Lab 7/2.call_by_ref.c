//Write a program to display the address and value of a variable using a pointer.

#include <stdio.h>

void CallByValue(int a){
    a=100;
    printf("Inside Call By Value: %d\n", a);

}
void CallByReference(int *a){
    *a=100;
    printf("Inside Call By Reference: %d\n", *a);

}

int main(){

        int x = 10;
        int y = 20;
        printf("Before Call By Value: %d\n", x);
        CallByValue(x);
        printf("After Call By Value: %d\n", x);

        printf("\n");

        printf("Before Call By Reference: %d\n", y);
        CallByReference(&y);
        printf("After Call By Reference: %d\n", y);
    
        return 0;
    }
