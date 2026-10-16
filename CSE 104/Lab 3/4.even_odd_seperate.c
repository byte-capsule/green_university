\\Write a program in C to separate odd and even integers in separate arrays.

#include <stdio.h>
int main(){
	int arr_size=9, arr[9]={1,2,3,4,5,6,7,8,9};
    int even_arr[9],odd_arr[9];
	int even_count=0 , odd_count=0;
	for(int i=0;i<arr_size;i++){
		if(arr[i]%2==0){
			even_arr[even_count++]=arr[i];
		}else{
			odd_arr[odd_count++]=arr[i];
		}
	}
    printf("Even numbers: ");
    for(int i = 0; i < even_count; i++) {
        printf("%d ", even_arr[i]);
    }
    
    printf("\nOdd numbers: ");
    for(int i = 0; i < odd_count; i++) {
        printf("%d ", odd_arr[i]);
    }
    printf("\n");
    return 0;
	
}
