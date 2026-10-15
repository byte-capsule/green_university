//Write a program in C to find the maximum and minimum element in an array

#include <stdio.h>
int main(){
	int arr_size=6,arr[6]={2,9,7,3,1,5};
	int max=arr[0],min=arr[0];
	for(int i=0;i<arr_size;i++){
		if(max<arr[i]){
			max=arr[i];
		}
		if(min>arr[i]){
			min=arr[i];
			
	    }
    }
	printf("Max : %d \nMin : %d",max,min);
    
    return 0;
	
}
