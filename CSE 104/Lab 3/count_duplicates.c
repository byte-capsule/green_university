\\Write a program in C to count a total number of duplicate elements in an array.

#include <stdio.h>
void main(){
	int dup_count=0;
    int arr_size=6;
	int arr[6]={1,3,5,3,1,1};
	for(int i=0;i<arr_size;i++){
		for(int j=i+1;j<arr_size;j++){
			if(arr[j]==arr[i]){
				dup_count+=1;
                break;
			}
		}
	}
    printf("Total Duplicate elemets : %d",dup_count);
}
