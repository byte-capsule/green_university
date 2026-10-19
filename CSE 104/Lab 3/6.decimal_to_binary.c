//Write a C program to convert Decimal to Binary number system.

#include <stdio.h>
int main(){
  int number=123;
  int binary[32];
  int i=0;
  while(number>0){
    binary[i]=number%2;
    number/=2;
    i++;
  }

  for( int j=i-1;j>=0;j--){
    printf("%d", binary[j]);
  }
  return 0;
}
