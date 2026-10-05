//Variable Swapper: Swap the values of two integer variables without using a third (temporary) variable, utilizing only arithmetic operators (+ and -).
#include <stdio.h>
int main() {
    int a,b;
    printf("Enter value of A & B : ");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("A & B is : %d %d",a,b);
    return 0;
}
